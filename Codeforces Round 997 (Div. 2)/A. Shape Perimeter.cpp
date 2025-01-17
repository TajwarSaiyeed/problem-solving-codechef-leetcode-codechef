/*
    Author: Tajwar Saiyeed
    Date: 2025-01-17 21:01:08
    File: A. Shape Perimeter.cpp
*/
#include <bits/stdc++.h>
using namespace std;
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
    int n, m;
    cin >> n >> m;
    
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    ll sum = 4 * m;

    for (int i = 1; i < n; i++)
    {
        sum = sum + 4 * m - 2 * (m - x[i]) - 2 * (m - y[i]);
    }

    cout << sum << '\n';
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
