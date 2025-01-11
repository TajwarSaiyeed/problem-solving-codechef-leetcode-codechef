/*
    Author: Tajwar Saiyeed
    Date: 2025-01-10 18:57:29
    File: A. Design Tutorial Learn from Math.cpp
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

int N = 1000005;
vector<bool> composite(N, false);

void sieve_composite()
{
    composite[0] = false;
    composite[1] = false;
    for (int i = 2; i * i <= N; i++)
        if (!composite[i])
            for (int j = i * 2; j <= N; j += i)
                composite[j] = true;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
        if (composite[i] && composite[n - i])
        {
            cout << i << " " << n - i << nl;
            break;
        }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve_composite();
    solve();
    return 0;
}

// Problem :