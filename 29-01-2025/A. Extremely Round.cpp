/*
    Author: Tajwar Saiyeed
    Date: 2025-01-29 14:45:49
    File: A. Extremely Round.cpp
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

    vi v = {1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            20,
            30,
            40,
            50,
            60,
            70,
            80,
            90, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000};
    int cnt = 0;
    for (int x : v)
    {
        if (x <= n)
            cnt++;
        else
            break;
    }
    cout << cnt << nl;
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