/*
    Author: Tajwar Saiyeed
    Date: 2024-11-02 20:44:07
    File: A. Quintomania.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int x = abs(a[i] - a[i + 1]);
        if (x != 5 and x != 7)
        {
            cout << "NO" << nl;
            return;
        }
    }

    cout << "YES" << nl;

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

// Problem : https://codeforces.com/contest/2036/problem/A