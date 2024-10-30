/*
    Author: Tajwar Saiyeed
    Date: 2024-10-29 10:03:00
    File: F. Adding Bits.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll result = a ^ b;
    cout << result << nl;
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

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F