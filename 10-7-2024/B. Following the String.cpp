/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 07:31:19
    File: B. Following the String.cpp
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
        ll n;
        cin >> n;
        vll a(n);
        fr(i, 0, n) cin >> a[i];
        map<char, int> mp;
        fr(i, 0, 26) mp['a' + i] = 0;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            for (auto [key, value] : mp)
            {
                if (value == a[i])
                {
                    s += key;
                    mp[key]++;
                    break;
                }
            }
        }
        cout << s << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1927/B