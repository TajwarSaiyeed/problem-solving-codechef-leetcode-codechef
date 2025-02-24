/*
    Author: Tajwar Saiyeed
    Date: 2025-02-24 10:42:25
    File: A. Presents.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
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

// Problem : https://codeforces.com/problemset/problem/136/A