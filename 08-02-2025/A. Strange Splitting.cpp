#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[0] == a[n - 1])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            string s(n, 'B');
            s[1] = 'R';
            cout << s << "\n";
        }
    }

    return 0;
}