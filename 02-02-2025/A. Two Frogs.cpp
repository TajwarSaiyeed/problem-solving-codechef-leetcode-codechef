/*
    Author: Tajwar Saiyeed
    Date: 2025-02-02 21:12:12
    File: A. Two Frogs.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define cin std::cin
#define cout std::cout

void solve()
{
    int x, a, b;
    cin >> x >> a >> b;
    if ((a ^ b) & 1)
        cout << "NO" << nl;
    else
        cout << "YES" << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/2055/A
