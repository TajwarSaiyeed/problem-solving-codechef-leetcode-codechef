#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> sequence(n);
    int base = 2;

    for (int i = 0; i < n; ++i)
    {
        sequence[i] = base;
        base += 3;
    }

    for (int num : sequence)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}