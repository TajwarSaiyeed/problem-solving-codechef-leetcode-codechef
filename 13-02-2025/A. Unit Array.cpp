/*
    Author: Tajwar Saiyeed
    Date: 2025-02-13 21:52:59
    File: A. Unit Array.cpp
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

    vi v(n);
    int pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
            pos++;
        else
            neg++;
    }
    int ans = 0;
    while (neg > pos)
    {
        neg--;
        pos++;
        ans++;
    }

    cout << (neg & 1 ? ans + 1 : ans) << nl;
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

// Problem : https://codeforces.com/problemset/problem/1834/A