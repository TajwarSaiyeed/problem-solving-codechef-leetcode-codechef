/*
    Author: Tajwar Saiyeed
    Date: 2025-02-07 19:13:51
    File: C. Hard Problem.cpp
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
#define dt(n) fixed << setprecision(n)
typedef long long ll;

void solve()
{
    ll m, a, b, c;

    cin >> m >> a >> b >> c;
    ll sum = a + b + c;
    if (sum <= m)
    {
        cout << sum << nl;
        return;
    }

    ll r1 = m >= a ? a : m;
    ll r2 = m >= b ? b : m;
    m *= 2;
    m -= r1;
    m -= r2;
    ll ans = r1 + r2 + min(m, c);
    cout << ans << nl;
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