/*
    Author: Tajwar Saiyeed
    Date: 2024-10-19 20:49:03
    File: B. Minimise Oneness.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        p0;
        cout<<nl;
        return;
    }

    p1;

    for(int i=1; i<n; i++)
        p0;

    cout<<nl;
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

// Problem : https://codeforces.com/contest/2030/problem/B