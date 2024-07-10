/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 17:58:19
    File: A. Satisfying Constraints.cpp
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
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        ll one_ = 0, two_ = INT_MAX, x, y;

        vector<pair<ll, ll>> v;
        fr(i, 0, n)
        {
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        set<int> three_;
        for (auto [x, y] : v)
            if (x == 1)
                one_ = max(one_, y);
            else if (x == 2)
                two_ = min(two_, y);
            else
                three_.insert(y);

        if (one_ > two_)
        {
            cout << 0 << nl;
        }
        else
        {
            ll ans = two_ - one_ + 1;
            for (auto y : three_)
            {
                if (y >= one_ && y <= two_)
                    ans--;
            }
            cout << ans << nl;
        }
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1920/problem/A