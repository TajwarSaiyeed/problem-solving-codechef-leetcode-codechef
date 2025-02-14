/*
    Author: Tajwar Saiyeed
    Date: 2025-02-14 17:49:11
    File: A. Array Coloring.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define vi std::vector<int>
#define cin std::cin
#define cout std::cout

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a)
        cin >> x;

    int total = accumulate(a.begin(), a.end(), 0);

    if (total & 1)
    {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1857/A