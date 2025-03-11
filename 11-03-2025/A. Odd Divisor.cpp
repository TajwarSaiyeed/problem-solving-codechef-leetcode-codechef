/*
    Author: Tajwar Saiyeed
    Date: 2025-03-11 21:32:12
    File: A. Odd Divisor.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    if (n & (n - 1))
        yes;
    else
        no;
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

// Problem : https://codeforces.com/problemset/problem/1475/A