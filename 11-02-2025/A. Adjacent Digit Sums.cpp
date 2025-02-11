/*
    Author: Tajwar Saiyeed
    Date: 2025-02-11 20:37:10
    File: A. Adjacent Digit Sums.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define cin std::cin
#define cout std::cout

typedef long long ll;

void solve()
{
    int x, y;
    cin >> x >> y;
    int d = x + 1 - y;
    if (d >= 0 && d % 9 == 0)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
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