/*
    Author: Tajwar Saiyeed
    Date: 2024-09-27 23:35:10
    File: A. Free Ice Cream.cpp
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll available = x, child = 0;
    while (n--)
    {
        char ch;
        int d;
        cin >> ch >> d;
        if (ch == '+')
            available += d;
        else if (available < d)
            child++;
        else
            available -= d;
    }
    cout << available << ' ' << child << '\n';
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

// Problem : https://codeforces.com/problemset/problem/686/A