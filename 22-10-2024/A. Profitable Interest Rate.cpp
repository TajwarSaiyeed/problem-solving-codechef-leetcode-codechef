/*
    Author: Tajwar Saiyeed
    Date: 2024-10-22 06:46:16
    File: A. Profitable Interest Rate.cpp
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
        cout << a << endl;
    else if (a < b && 2 * a > b)
        cout << (2 * a - b) << endl;
    else
        cout << 0 << endl;
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

// Problem : https://codeforces.com/contest/2024/problem/A