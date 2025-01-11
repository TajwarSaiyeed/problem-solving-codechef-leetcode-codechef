/*
    Author: Tajwar Saiyeed
    Date: 2025-01-10 19:13:59
    File: A. Lunch Rush.cpp
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
    ll n, k;
    cin>>n>>k;
    ll mx = LLONG_MIN;
    while (n--)
    {   
        ll f, t;
        cin>>f>>t;
        if(t>k) {
            mx = max(mx, f-(t-k));
        }
        else {
            mx = max(mx, f);
        }
    }

    cout << mx << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}


// Problem : 