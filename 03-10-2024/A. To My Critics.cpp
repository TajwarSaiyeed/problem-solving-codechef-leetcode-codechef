/*
    Author: Tajwar Saiyeed
    Date: 2024-10-03 21:49:04
    File: A. To My Critics.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define vi vector<int>
#define srt(vll) sort(vll.begin(), vll.end())
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vi v = {a, b, c};
    srt(v);
    if (v[1] + v[2] >= 10)
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1850/A