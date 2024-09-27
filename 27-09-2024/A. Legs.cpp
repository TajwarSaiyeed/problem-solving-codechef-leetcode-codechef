/*
    Author: Tajwar Saiyeed
    Date: 2024-09-27 23:29:07
    File: A. Legs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    while (n > 2)
    {
        n -= 4;
        ans++;
    }

    if (n == 2)
        ans++;
    cout << ans << endl;
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

// Problem : https://codeforces.com/problemset/problem/1996/A