/*
    Author: Tajwar Saiyeed
    Date: 2024-11-01 20:44:24
    File: A. Circuit.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    int cnt = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            cnt++;
    }
    int mn = (cnt % 2 == 0) ? 0 : 1;
    int mx = min(cnt, 2 * n - cnt);
    cout << mn << " " << mx << nl;
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

// Problem : https://codeforces.com/contest/2032/problem/A