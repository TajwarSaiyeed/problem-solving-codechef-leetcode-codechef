/*
    Author: Tajwar Saiyeed
    Date: 2025-02-10 20:48:52
    File: A. Juicer.cpp
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve()
{
    ll n, b, d;
    cin >> n >> b >> d;

    ll sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        if (a <= b)
        {
            sum += a;
        }

        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }

    cout << count << nl;
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

// Problem : https://codeforces.com/contest/709/problem/A