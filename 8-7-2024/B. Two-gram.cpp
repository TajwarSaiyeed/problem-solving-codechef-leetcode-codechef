/*
    Author: Tajwar Saiyeed
    Date: 2024-07-08 21:29:36
    File: B. Two-gram.cpp
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

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    int mx = 0;
    fr(i, 0, n - 1)
    {
        string x = s.substr(i, 2);
        mp[x]++;
        mx = max(mx, mp[x]);
    }

    for (auto x : mp)
    {
        if (x.second == mx)
        {
            cout << x.first << nl;
            break;
        }
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/977/B