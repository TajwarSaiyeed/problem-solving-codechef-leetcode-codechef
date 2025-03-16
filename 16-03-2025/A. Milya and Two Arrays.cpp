/*
    Author: Tajwar Saiyeed
    Date: 2025-03-16 20:08:27
    File: A. Milya and Two Arrays.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    set<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
    }

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.insert(x);
    }

    ll ans = a.size() + b.size();

    if (ans >= 4)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
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