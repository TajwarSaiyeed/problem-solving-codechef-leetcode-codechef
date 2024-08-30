/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 17:50:40
    File: C. Prepend and Append.cpp
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

    int l = 0, r = n - 1, cnt = 0;
    while (l <= r)
    {
        if (s[l] == s[r])
            break;

        cnt++;
        l++;
        r--;
    }
    cout << n - 2 * cnt << nl;
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

// Problem : https://codeforces.com/problemset/problem/1791/C