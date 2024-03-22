/*
    Author: Tajwar Saiyeed
    Date: 2024-03-22 10:37:55
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> Halloumi(n);
        for (int i = 0; i < n; i++)
            cin >> Halloumi[i];

        if (k >= 2)
        {
            cout << "YES" << '\n';
            continue;
        }

        vector<ll> cp = Halloumi;
        sort(cp.begin(), cp.end());

        if (cp == Halloumi)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1903/A