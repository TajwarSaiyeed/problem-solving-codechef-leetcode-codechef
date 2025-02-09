/*
    Author: Tajwar Saiyeed
    Date: 2025-02-09 20:40:12
    File: C_1_Skibidus_and_Fanum_Tax_easy_version.cpp
*/
#include <bits/stdc++.h>
#define cin std::cin
#define cout std::cout
#define set std::set
#define ll long long
#define vector std::vector

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    ll b;
    cin >> b;

    set<ll> dp;
    dp.insert(a[0]);
    dp.insert(b - a[0]);

    for (int i = 1; i < n; i++)
    {
        set<ll> nextStates;
        ll x = a[i];
        ll y = b - a[i];
        for (auto prev : dp)
        {
            if (x >= prev)
                nextStates.insert(x);
            if (y >= prev)
                nextStates.insert(y);
        }
        dp = nextStates;
    }
    cout << (dp.empty() ? "NO" : "YES") << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}


// Problem : 