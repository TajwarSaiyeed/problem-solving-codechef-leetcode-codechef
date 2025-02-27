/*
    Author: Tajwar Saiyeed
    Date: 2025-02-27 20:51:56
    File: B. Sale.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>

void solve()
{
    int m, n;
    cin >> m >> n;
    vi a(m), b;
    for (int &x : a)
    {
        cin >> x;
        if (x == 0 || x < 0)
            b.push_back(x);
    }

    sort(b.begin(), b.end());
    int sum = 0;
    for (int i = 0; i < b.size() and i < n; i++)
    {
        sum += abs(b[i]);
    }

    cout << sum << nl;
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

// Problem : https://codeforces.com/problemset/problem/34/B