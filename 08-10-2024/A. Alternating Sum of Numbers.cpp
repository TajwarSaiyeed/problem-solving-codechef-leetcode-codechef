/*
    Author: Tajwar Saiyeed
    Date: 2024-10-08 22:54:57
    File: A. Alternating Sum of Numbers.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int positive = 0, negative = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i % 2 == 0)
            negative += x;
        else
            positive += x;
    }

    cout << negative - positive << '\n';
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

// Problem : https://codeforces.com/contest/2010/problem/A