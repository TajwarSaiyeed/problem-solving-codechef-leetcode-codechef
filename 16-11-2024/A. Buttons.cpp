/*
    Author: Tajwar Saiyeed
    Date: 2024-11-16 20:38:46
    File: A. Buttons.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (c % 2 == 0)
    {
        if (b >= a)
        {
            cout << "Second" << nl;
        }
        else
        {
            cout << "First" << nl;
        }
    }
    else
    {
        if (a < b)
        {
            cout << "Second" << nl;
        }
        else
        {

            cout << "First" << nl;
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

// Problem : https://codeforces.com/contest/1858/problem/A