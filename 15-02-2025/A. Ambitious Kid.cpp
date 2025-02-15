/*
    Author: Tajwar Saiyeed
    Date: 2025-02-15 08:23:07
    File: A. Ambitious Kid.cpp
*/
#include <bits/stdc++.h>
#define cin std::cin
#define cout std::cout
#define vi std::vector<int>
#define min std::min
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a)
        cin >> x;

    int mn = INT_MAX;

    for (auto x : a)
    {
        mn = min(mn, abs(x));
    }

    cout << mn << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1866/A