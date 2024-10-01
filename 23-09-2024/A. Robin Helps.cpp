/*
    Author: Tajwar Saiyeed
    Date: 2024-10-01 13:06:18
    File: A. Robin Helps.cpp
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int notZero = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x >= k)
            notZero += x;
        else if (x == 0 and notZero > 0)
        {
            notZero--;
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/2014/A