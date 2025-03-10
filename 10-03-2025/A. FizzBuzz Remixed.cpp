/*
    Author: Tajwar Saiyeed
    Date: 2025-03-10 21:55:02
    File: A. FizzBuzz Remixed.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 3 * (n / 15);
    n %= 15;
    for (ll j = 0; j <= n; ++j)
    {
        if (j % 3 == j % 5)
        {
            ans++;
        }
    }
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

// Problem : https://codeforces.com/problemset/problem/2070/A