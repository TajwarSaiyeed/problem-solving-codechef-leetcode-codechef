/*
    Author: Tajwar Saiyeed
    Date: 2025-02-11 17:32:08
    File: B. Longest Divisors Interval.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define cin std::cin
#define cout std::cout

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << nl;
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

// Problem : https://codeforces.com/problemset/problem/1855/B