/*
    Author: Tajwar Saiyeed
    Date: 2025-03-08 21:57:07
    File: A. New Year Candles.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = a;

    while (a >= b)
    {
        ans += a / b;
        a = (a / b) + a % b;
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

// Problem :