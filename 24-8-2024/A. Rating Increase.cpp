/*
    Author: Tajwar Saiyeed
    Date: 2024-08-24 22:33:29
    File: A. Rating Increase.cpp
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

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 1; i < n; i++)
    {
        // cout << i << " - " << s.substr(0, i) << " " << s.substr(i) << endl;
        auto a = s.substr(0, i);
        auto b = s.substr(i);
        if (a[0] != '0' && b[0] != '0' && a != b && stoi(a) < stoi(b))
        {
            cout << a << ' ' << b << nl;
            return;
        }
    }

    cout << -1 << nl;
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

// Problem : https://codeforces.com/contest/1913/problem/A