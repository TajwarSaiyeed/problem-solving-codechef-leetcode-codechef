/*
    Author: Tajwar Saiyeed
    Date: 2024-09-04 23:17:33
    File: A. Holiday Of Equality.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
#define fr(i, a, b) for (int i = a; i < b; i++)
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    ll sum = 0;
    fr(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
    };

    int mx = *max_element(a.begin(), a.end());
    cout << mx * n - sum << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :