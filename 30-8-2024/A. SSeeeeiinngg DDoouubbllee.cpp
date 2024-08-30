/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 18:03:00
    File: A. SSeeeeiinngg DDoouubbllee.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << s << rev << nl;
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

// Problem :