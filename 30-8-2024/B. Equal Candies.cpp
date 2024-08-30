/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 07:04:14
    File: B. Equal Candies.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    fr(i, 0, n) cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    ll sum = 0;
    fr(i, 0, n) sum += a[i] - mn;
    cout << sum << nl;
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

// Problem : https://codeforces.com/problemset/problem/1676/B