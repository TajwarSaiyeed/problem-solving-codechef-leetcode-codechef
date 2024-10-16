/*
    Author: Tajwar Saiyeed
    Date: 2024-10-16 20:48:38
    File: A. Bus to Pénjamo.cpp
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
    int n, r;
    cin >> n >> r;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int can_seat = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        can_seat += 2 * (a[i] / 2);
        sum += a[i] % 2;
        r -= (a[i] / 2);
    }

    if (sum < r)
        can_seat += sum;
    else
        can_seat += (r * 2 - sum);

    cout << can_seat << endl;
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

// Problem : https://codeforces.com/contest/2022/problem/A
