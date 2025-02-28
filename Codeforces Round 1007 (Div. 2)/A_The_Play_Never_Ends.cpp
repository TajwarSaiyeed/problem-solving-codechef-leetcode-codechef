/*
    Author: Tajwar Saiyeed
    Date: 2025-02-28 20:37:16
    File: A_The_Play_Never_Ends.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
typedef long long ll;

void solve()
{
    ll k;
    cin >> k;
    if (k % 3 == 1)
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

// Problem : https://codeforces.com/contest/2071/problem/A