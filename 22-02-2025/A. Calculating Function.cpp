/*
    Author: Tajwar Saiyeed
    Date: 2025-02-22 06:54:05
    File: A. Calculating Function.cpp
*/
#include <bits/stdc++.h>
typedef long long ll;
#define cin std::cin
#define cout std::cout
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n / 2) << nl;
    else
        cout << (-(n + 1)) / 2 << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/486/A