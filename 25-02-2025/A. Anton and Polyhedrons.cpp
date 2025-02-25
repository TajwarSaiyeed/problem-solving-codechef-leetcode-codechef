/*
    Author: Tajwar Saiyeed
    Date: 2025-02-25 21:26:21
    File: A. Anton and Polyhedrons.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    int sum = 0;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        sum += mp[s];
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

// Problem : https://codeforces.com/problemset/problem/785/A