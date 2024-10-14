/*
    Author: Tajwar Saiyeed
    Date: 2024-10-14 21:16:53
    File: A. Two Screens.cpp
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
    string s, t;
    cin >> s >> t;
    int x = s.size();
    int y = t.size();
    int sum = 0;
    int cnt = 0, n = 0;
    int m = min(x, y);
    for (int i = 0; i < m; i++)
    {
        if (s[i] != t[i])
        {
            sum += 2;
            cnt = 1;
        }
        else
        {
            if (cnt == 0)
                n++;
            sum++;
            if (cnt == 1)
                sum++;
        }
    }
    if (n > 0)
        sum++;
    if (m < x)
        sum += (x - m);
    if (m < y)
        sum += (y - m);
    cout << sum << endl;
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

// Problem : https://codeforces.com/contest/2025/problem/A