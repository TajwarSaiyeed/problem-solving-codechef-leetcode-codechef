/*
    Author: Tajwar Saiyeed
    Date: 2025-01-23 06:39:32
    File: A. Minimal Coprime.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll l, r;
    cin >> l >> r;
    if (l == r)
    {
        if (l == 1)
            cout << 1 << nl;
        else
            cout << 0 << nl;
    }
    else
    {
        cout << r - l << nl;
    }
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

// Problem : https://codeforces.com/contest/2063/problem/A