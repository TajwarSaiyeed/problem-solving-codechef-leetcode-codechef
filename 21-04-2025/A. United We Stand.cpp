/*
    Author: Tajwar Saiyeed
    Date: 2025-04-21 08:21:55
    File: A. United We Stand.cpp
*/
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define srt(vi) sort(vi.begin(), vi.end())
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vi a(n), b, c;
    for (int &x : a)
        cin >> x;
    srt(a);

    int mn = a[0];

    int i = 0;
    while (i < n)
    {
        if (a[i] != mn)
            break;
        b.push_back(a[i]);
        i++;
    }

    if (i < n)
        c.assign(a.begin() + i, a.end());

    if (b.empty() || c.empty())
        cout << -1;
    else
    {
        cout << b.size() << " " << c.size() << nl;
        for (int x : b)
            cout << x << " ";
        cout << nl;
        for (int x : c)
            cout << x << " ";
    }

    cout << nl;
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

// Problem : https://codeforces.com/contest/1859/problem/A