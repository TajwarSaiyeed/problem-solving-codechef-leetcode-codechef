/*
    Author: Tajwar Saiyeed
    Date: 2024-10-09 10:38:39
    File: A. Increasing Sequence.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    int n, d;
    cin >> n >> d;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int op = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            int t = (a[i-1] - a[i]) / d + 1;
            a[i] += d * t;
            op += t;
        }
    }

    cout << "op " << op << endl;
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

// Problem : https://codeforces.com/contest/11/problem/A