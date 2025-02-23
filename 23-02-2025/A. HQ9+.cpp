/*
    Author: Tajwar Saiyeed
    Date: 2025-02-23 07:21:30
    File: A. HQ9+.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

void solve()
{
    string s;
    cin >> s;

    // if (s.contains("H") || s.contains("9") || s.contains("Q"))
    if (s.find("H") != string::npos || s.find("Q") != string::npos || s.find("9") != string::npos)
        yes;
    else
        no;
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

// Problem : https://codeforces.com/contest/133/problem/A