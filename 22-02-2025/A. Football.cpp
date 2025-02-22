/*
    Author: Tajwar Saiyeed
    Date: 2025-02-22 14:13:31
    File: A. Football.cpp
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

    string z7 = "0000000", o7 = "1111111";
    if (s.size() < 7)
        no;
    else if (s.contains(z7) or s.contains(o7))
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

// Problem : https://codeforces.com/problemset/problem/96/A