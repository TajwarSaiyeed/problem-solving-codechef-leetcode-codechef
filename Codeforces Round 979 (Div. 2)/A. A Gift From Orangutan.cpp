/*
    Author: Tajwar Saiyeed
    Date: 2024-10-19 20:20:29
    File: A. A Gift From Orangutan.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort (a.begin(), a.end());
    int mn = a[0];
    int mx = a[n - 1];

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
        ans += mx - mn;

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

// Problem : https://codeforces.com/contest/2030/problem/A