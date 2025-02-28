/*
    Author: Tajwar Saiyeed
    Date: 2025-02-27 21:20:48
    File: A. Magic Numbers.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'

void solve()
{
    string s;
    cin >> s;

    regex pattern("^((1|14|144)*?)$");

    if (regex_match(s, pattern))
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

// Problem : https://codeforces.com/problemset/problem/320/A