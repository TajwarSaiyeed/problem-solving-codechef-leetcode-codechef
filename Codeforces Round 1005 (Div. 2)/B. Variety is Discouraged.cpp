/*
    Author: Tajwar Saiyeed
    Date: 2025-02-17 06:56:24
    File: B. Variety is Discouraged.cpp
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
    int n;
    cin >> n;
    vll a(n);
    map<ll, int> mp;
    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    int l = -1, r = -1, cur = 0, mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 1)
            cur++;
        else
            cur = 0;

        if (cur > mx)
        {
            mx = max(mx, cur);
            r = i;
            l = i - cur + 1;
        }
    }

    if (l == -1 and r == -1)
        cout << 0 << nl;
    else
        cout << l+1 << " " << r+1 << nl;
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

// Problem : https://codeforces.com/contest/2064/problem/B