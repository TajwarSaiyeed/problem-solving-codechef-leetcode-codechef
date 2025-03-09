/*
    Author: Tajwar Saiyeed
    Date: 2025-03-09 19:08:33
    File: A. Game With Sticks.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;

    int x = min(n, m);

    if (x % 2 == 1)
        cout << "Akshat" << nl;
    else
        cout << "Malvika" << nl;
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

// Problem :