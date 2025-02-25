/*
    Author: Tajwar Saiyeed
    Date: 2025-02-25 21:01:22
    File: B_Having_Been_a_Treasurer_in_the_Past_I_Help_Goblins_Deceive.cpp
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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll u = 0, d = 0;
    for (char c : s)
    {
        if (c == '-')
            u++;
        else if (c == '_')
            d++;
    }

    if (u < 2 || d == 0)
    {
        cout << 0 << nl;
        return;
    }

    ll ans = d * (u / 2) * (u - u / 2);
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