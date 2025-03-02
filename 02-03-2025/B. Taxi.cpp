/*
    Author: Tajwar Saiyeed
    Date: 2025-03-02 17:02:15
    File: B. Taxi.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp = {
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
    };

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans = mp[4];
    int mn = min(mp[1], mp[3]);
    ans += mn;
    mp[1] -= mn;
    mp[3] -= mn;
    ans += mp[3];
    ans += mp[2] / 2;

    if (mp[2] % 2 == 1)
    {
        ans++;
        mp[1] = max(0, mp[1] - 2);
    }
    ans += (mp[1] + 3) / 4;

    cout << ans << nl;
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

// Problem :