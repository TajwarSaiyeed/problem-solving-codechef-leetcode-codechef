/*
    Author: Tajwar Saiyeed
    Date: 2024-10-25 22:59:28
    File: A. Minutes Before the New Year.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int hr, mn;
    cin >> hr >> mn;
    cout << 1440 - (hr * 60 + mn) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1283/A