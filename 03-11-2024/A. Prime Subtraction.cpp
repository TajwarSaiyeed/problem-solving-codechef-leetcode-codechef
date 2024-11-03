/*
    Author: Tajwar Saiyeed
    Date: 2024-11-03 12:03:14
    File: A. Prime Subtraction.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll x, y;
    cin>>x>>y;
    if (x - y > 1)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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

// Problem : https://codeforces.com/contest/1238/problem/A