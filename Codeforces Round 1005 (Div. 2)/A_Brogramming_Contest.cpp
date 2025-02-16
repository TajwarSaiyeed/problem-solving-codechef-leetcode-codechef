/*
    Author: Tajwar Saiyeed
    Date: 2025-02-16 20:37:14
    File: A_Brogramming_Contest.cpp
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

    int cntz = count(s.begin(), s.end(), '0');
    int cnto = count(s.begin(), s.end(), '1');
    bool hasZero = (cntz > 0);
    bool hasOne = (cnto > 0);
    if (!hasOne)
    {
        cout << 0 << "\n";
        return;
    }
    else if (!hasZero)
    {
        cout << 1 << "\n";
        return;
    }
    else
    {

        int ans = 0;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                ans++;

        if (s[0] == '1')
            cout << ans + 1 << "\n";
        else
            cout << ans << "\n";
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