/*
    Author: Tajwar Saiyeed
    Date: 2025-02-23 06:52:34
    File: A. Tram.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define pi pair<int, int>

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (pair<int, int> &x : v)
        cin >> x.first >> x.second;

    int mx = 0, ans = 0;

    // for (pair<int, int> &x : v) {
    //     mx = max(mx, x.first+ x.second);
    // }

    for (int i = 0; i < n; i++)
    {
        // int x = abs(v[i - 1].second - v[i].first);
        // int y = x + v[i].second;
        // mx = max(mx, y);

        pi x = v[i];
        int y = mx - x.first + x.second;
        mx = y;
        ans = max(mx, ans);
    }

    cout << ans << nl;
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

// Problem : https://codeforces.com/problemset/problem/116/A