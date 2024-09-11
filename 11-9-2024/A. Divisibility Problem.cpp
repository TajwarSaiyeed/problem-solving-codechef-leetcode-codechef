/*
    Author: Tajwar Saiyeed
    Date: 2024-09-11 06:16:11
    File: A. Divisibility Problem.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a, b;
    cin >> a >> b;

    if (a % b == 0)
        cout << 0 << '\n';
    else
        cout << b - a % b << '\n';
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

// Problem : https://codeforces.com/problemset/problem/1328/A