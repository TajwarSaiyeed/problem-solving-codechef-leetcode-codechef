/*
    Author: Tajwar Saiyeed
    Date: 2025-02-27 19:51:20
    File: A. Fox And Snake.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    string s(m, '#');
    string x(m - 1, '.');
    bool f = false;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << s << nl;
        }
        else if (!f)
        {
            cout << x + '#' << nl;
            f = true;
        }
        else
        {
            cout << '#' + x << nl;
            f = false;
        }
    }
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

// Problem : https://codeforces.com/problemset/problem/510/A