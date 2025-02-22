/*
    Author: Tajwar Saiyeed
    Date: 2025-02-22 07:25:19
    File: A. Domino piling.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int m, n;
    cin >> m >> n;

    cout << (m * n) / 2 << nl;

    // if (m == 1 || n == 1)
    // {
    //     cout << max(m / 2, n / 2) << nl;
    //     return;
    // }

    // if (m == 2 || n == 2)
    // {
    //     cout << max(m, n) << nl;
    //     return;
    // }

    // if (m % 2 == 0 and n % 2 == 0)
    //     cout << (n * (m / 2)) << nl;
    // else if (m % 2 == 0 or n % 2 == 0)
    //     cout << ((n * (m / 2)) + (n - 1) / 2) + 1 << nl;
    // else
    //     cout << (n * (m / 2) + (n - 1) / 2) << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/50/A