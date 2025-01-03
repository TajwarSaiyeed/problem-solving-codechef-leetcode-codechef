/*
    Author: Tajwar Saiyeed
    Date: 2025-01-03 20:29:17
    File: B. Balanced Array.cpp
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
    cin>>n;
    int x = n / 2;
    if(x%2 == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 2; i <= n; i+=2) {
            cout << i << " ";
        }
        for (int i = 1; i < n - 1; i += 2)
        {
            cout << i << " ";
        }

        cout << n + x - 1 << " ";
        cout << endl;
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