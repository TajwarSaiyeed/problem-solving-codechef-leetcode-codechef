/*
    Author: Tajwar Saiyeed
    Date: 2024-10-04 07:15:04
    File: B1. The Strict Teacher (Easy Version).cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vi a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int t1 = a[0], t2 = a[1];

    int x;
    cin >> x;

    if (x < t1)
        cout << t1 - 1 << nl;
    else if (x > t2)
        cout << n - t2 << nl;
    else
    {
        int mid = (t1 + t2) / 2;
        int ans = min(abs(mid - t1), abs(mid - t2));
        cout << ans << nl;
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

// Problem : https://codeforces.com/contest/2005/problem/B1