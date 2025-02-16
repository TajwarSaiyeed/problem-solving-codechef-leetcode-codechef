/*
    Author: Tajwar Saiyeed
    Date: 2025-02-16 11:57:01
    File: A. Desorting.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define vll vector<ll>
#define nl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for (auto &x : a)
        cin >> x;

    if (!is_sorted(a.begin(), a.end()))
    {
        cout << 0 << nl;
    }
    else
    {
        ll mn = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            mn = min(mn, abs(a[i] - a[i + 1]));
        }

        cout << (mn / 2) + 1 << nl;
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

// Problem :