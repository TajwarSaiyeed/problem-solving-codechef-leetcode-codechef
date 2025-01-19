#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int minLeft = a[0];
    for (int i = 1; i < n; ++i)
    {
        if (a[i] < minLeft)
        {
            cout << "NO" << endl;
            return;
        }
        a[i] = a[i] - min(a[i], a[i - 1]);
        minLeft = a[i];
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
