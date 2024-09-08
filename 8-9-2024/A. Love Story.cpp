/*
    Author: Tajwar Saiyeed
    Date: 2024-09-08 22:08:45
    File: A. Love Story.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s = "codeforces", in;
    cin >> in;
    int ans = 0;
    for (int i = 0; i < 10; i++)
        if (in[i] != s[i])
            ans++;

    cout << ans << '\n';
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

// Problem : https://codeforces.com/problemset/problem/1829/A