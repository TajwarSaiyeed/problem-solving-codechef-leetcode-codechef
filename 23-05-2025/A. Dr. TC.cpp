/*
    Author: Tajwar Saiyeed
    Date: 2025-05-23 19:48:52
    File: A. Dr. TC.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt1 = count(s.begin(), s.end(), '1');
    int cnt0 = n - cnt1;

    int ans = cnt1 * (n - 1) + cnt0;

    cout << ans << nl;
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

// Problem : https://codeforces.com/contest/2106/problem/A