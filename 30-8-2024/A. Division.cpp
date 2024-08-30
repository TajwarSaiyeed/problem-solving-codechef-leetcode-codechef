/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 17:41:54
    File: A. Division.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;

    if (n >= 1900)
        cout << "Division 1" << nl;
    else if (n >= 1600 and n < 1900)
        cout << "Division 2" << nl;
    else if (n >= 1400 and n < 1600)
        cout << "Division 3" << nl;
    else
        cout << "Division 4" << nl;
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

// Problem : https://codeforces.com/problemset/problem/1669/A