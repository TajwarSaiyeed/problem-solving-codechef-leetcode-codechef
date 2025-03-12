/*
    Author: Tajwar Saiyeed
    Date: 2025-03-12 21:06:55
    File: A. Draw a Square.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'

void solve()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l == r and r == d and d == u)
        yes;
    else
        no;
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

// Problem : https://codeforces.com/contest/2074/problem/A