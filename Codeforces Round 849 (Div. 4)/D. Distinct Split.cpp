/*
    Author: Tajwar Saiyeed
    Date: 2026-01-03 09:24:52
    File: D. Distinct Split.cpp
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
    string s;
    cin >> s;
    set<char> st;
    vi pre(n), suf(n);
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        pre[i] = st.size();
    }
    st.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(s[i]);
        suf[i] = st.size();
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, pre[i - 1] + suf[i]);
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

// Problem : https://codeforces.com/contest/1791/problem/D