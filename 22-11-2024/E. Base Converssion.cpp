/*
    Author: Tajwar Saiyeed
    Date: 2024-11-22 23:06:16
    File: E. Base Converssion.cpp
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

void decimal_to_binary(ll n)
{
    bool found_one = false;
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        if (found_one)
        {
            cout << bit;
        }
        else if (bit == 1)
        {
            found_one = true;
            cout << bit;
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    decimal_to_binary(n);
    cout << endl;
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

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E