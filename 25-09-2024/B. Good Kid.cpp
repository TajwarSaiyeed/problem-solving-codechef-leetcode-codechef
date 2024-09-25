/*
    Author: Tajwar Saiyeed
    Date: 2024-09-25 22:37:43
    File: B. Good Kid.cpp
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long ans = 1;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    a[0] += 1;
    for (int i = 0; i < n; i++)
        ans *= a[i];
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1873/B