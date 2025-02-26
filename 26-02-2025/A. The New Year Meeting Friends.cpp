/*
    Author: Tajwar Saiyeed
    Date: 2025-02-26 19:45:00
    File: A. The New Year Meeting Friends.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int mx = max({x, y, z});
    int mn = min({x, y, z});
    int middle = (x != mn and x != mx) ? x : (y != mn and y != mx) ? y
                                                                   : z;
    cout << mx - middle + abs(mn - middle) << nl;
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