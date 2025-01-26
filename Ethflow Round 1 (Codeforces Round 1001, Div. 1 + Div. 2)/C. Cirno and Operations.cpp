/*
    Author: Tajwar Saiyeed
    Date: 2025-01-26 22:12:58
    File: c.cpp
    */
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vll vector<ll>
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = accumulate(a.begin(), a.end(), 0LL);

    while (true)
    {
        if (a.size() == 1)
        {
            ans = max(ans, a[0]);
            break;
        }

        vector<ll> diffs;
        for (ll i = 0; i < a.size() - 1; i++)
        {
            diffs.push_back(a[i + 1] - a[i]);
        }

        if (accumulate(diffs.begin(), diffs.end(), 0LL) < 0)
        {
            for (auto &x : diffs)
            {
                x = -x;
            }
        }

        ans = max(ans, accumulate(diffs.begin(), diffs.end(), 0LL));
        reverse(diffs.begin(), diffs.end());
        a = diffs;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}