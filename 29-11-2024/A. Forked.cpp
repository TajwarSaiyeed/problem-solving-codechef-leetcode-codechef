/*
    Author: Tajwar Saiyeed
    Date: 2024-11-29 12:17:01
    File: A. Forked.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define pll pair<ll, ll>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

void solve()
{
    ll a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    vector<pll> v = {
        {a, b},
        {-a, b},
        {-a, -b},
        {a, -b},
        {b, a},
        {-b, a},
        {-b, -a},
        {b, -a}};

    set<pll> k, q;

    for (int i = 0; i < 8; i++)
    {
        k.insert({kx + v[i].first, ky + v[i].second});
        q.insert({qx + v[i].first, qy + v[i].second});
    }

    int ans = 0;
    for (auto x : k)
    {
        if (q.find(x) != q.end())
        {
            ans++;
        }
    }

    cout << ans << endl;
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