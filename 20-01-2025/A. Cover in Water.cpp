/*
    Author: Tajwar Saiyeed
    Date: 2025-01-20 17:29:14
    File: A. Cover in Water.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int empty = 0;
    for (auto x : s)
    {
        if (x == '.')
        {
            empty++;
            ans++;
        }
        else
        {
            empty = 0;
        }

        if (empty >= 3)
        {
            break;
        }
    }

    if (empty >= 3)
        cout << 2 << nl;
    else
    {
        cout << ans << nl;
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