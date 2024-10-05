/*
    Author: Tajwar Saiyeed
    Date: 2024-10-04 09:55:44
    File: B2. The Strict Teacher (Hard Version).cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vi a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;

        if (x < a[0])
            cout << a[0] - 1 << nl;
        else if (x > a[m - 1])
            cout << n - a[m - 1] << nl;
        else
        {
            auto upper = upper_bound(a.begin(), a.end(), x) - a.begin();
            cout << (a[upper] - a[upper - 1]) / 2 << nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/2005/problem/B2