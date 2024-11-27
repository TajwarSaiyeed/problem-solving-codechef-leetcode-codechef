/*
    Author: Tajwar Saiyeed
    Date: 2024-11-27 21:45:04
    File: B. Make It Increasing.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int op = 0;

    for (int i = n - 2; i >= 0; --i)
    {
        while (a[i] >= a[i + 1] && a[i] > 0)
        {
            a[i] /= 2;
            ++op;
        }

        if (a[i] >= a[i + 1])
        {
            op = -1;
            break;
        }
    }

    cout << op << nl;
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

// Problem : https://codeforces.com/contest/1675/problem/B