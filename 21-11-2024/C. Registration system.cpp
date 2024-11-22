/*
    Author: Tajwar Saiyeed
    Date: 2024-11-21 22:18:24
    File: C. Registration system.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    map<string, pair<int, int>> mp;
    while (n--)
    {
        cin >> s;
        if (mp[s].first == 0)
        {
            cout << "OK" << nl;
            mp[s].first++;
            mp[s].second++;
        }
        else
        {
            cout << s << mp[s].second << nl;
            mp[s].second++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

// Problem :