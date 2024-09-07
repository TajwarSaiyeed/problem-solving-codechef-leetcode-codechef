/*
    Author: Tajwar Saiyeed
    Date: 2024-09-07 12:06:59
    File: A. A+B Again.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << (n % 10 + n / 10) << '\n';
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

// Problem : https://codeforces.com/contest/1999/problem/A