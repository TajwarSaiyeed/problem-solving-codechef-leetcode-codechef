/*
    Author: Tajwar Saiyeed
    Date: 2024-10-24 23:20:39
    File: A. Sakurako and Kosuke.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Sakurako" << nl;
    else
        cout << "Kosuke" << nl;
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

// Problem : https://codeforces.com/contest/2033/problem/A