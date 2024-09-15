/*
    Author: Tajwar Saiyeed
    Date: 2024-09-15 07:45:00
    File: A. Theatre Square.cpp
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, a;
    cin >> n >> m >> a;
    ll ans = (ceil((m * 1.0) / a) * ceil((n * 1.0) / a));
    cout << ans << '\n';
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

// Problem : https://codeforces.com/contest/1/problem/A