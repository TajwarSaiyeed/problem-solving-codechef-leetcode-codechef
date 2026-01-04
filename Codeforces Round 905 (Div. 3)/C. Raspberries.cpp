/*
    Author: Tajwar Saiyeed
    Date: 2026-01-04 09:32:35
    File: C. Raspberries.cpp
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
    int n, k;
    cin >> n >> k;
    vi a(n);
    int even_cnt = 0;
    for (auto &x : a)
    {
        cin >> x;
        if (x % 2 == 0)
            even_cnt++;
    }

    int ans = k;
    for (int x : a)
    {
        if (x % k == 0)
            ans = 0;
        else
            ans = min(ans, k - x % k);
    }

    if (k == 4)
    {
        int res2 = max(0, 2 - even_cnt);
        ans = min(ans, res2);
    }

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

// Problem : https://codeforces.com/problemset/problem/1883/C
