/*
    Author: Tajwar Saiyeed
    Date: 2025-02-22 07:01:09
    File: A. Magnets.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vs vector<string>
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vs a(n);
    for (string &s : a)
        cin >> s;

    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != a[i - 1])
            ans++;
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

// Problem : https://codeforces.com/problemset/problem/344/A