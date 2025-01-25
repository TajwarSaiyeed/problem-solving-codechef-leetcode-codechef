/*
    Author: Tajwar Saiyeed
    Date: 2025-01-25 18:45:13
    File: A. Walking Master.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c and b == d)
    {
        cout << 0 << nl;
        return;
    }

    if (b > d)
    {
        cout << -1 << nl;
        return;
    }

    int y = d - b;
    a += y;

    if (a < c)
    {
        cout << -1 << nl;
        return;
    }

    cout << a + y - c << nl;
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