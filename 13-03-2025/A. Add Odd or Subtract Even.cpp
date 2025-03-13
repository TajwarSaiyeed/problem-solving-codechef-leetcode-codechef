/*
    Author: Tajwar Saiyeed
    Date: 2025-03-13 21:27:38
    File: A. Add Odd or Subtract Even.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << nl;
    }
    else if (a < b)
    {
        if ((b - a) % 2 == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 2 << nl;
        }
    }
    else
    {
        if ((a - b) % 2 == 0)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 2 << nl;
        }
    }
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