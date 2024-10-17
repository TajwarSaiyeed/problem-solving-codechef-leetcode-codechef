/*
    Author: Tajwar Saiyeed
    Date: 2024-10-17 23:52:01
    File: A. Reconnaissance 2.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int mn = INT_MAX, l = -1, r = -1;
    for (int i = 2; i <= n; i++)
    {
        int diff = abs(v[i] - v[i - 1]);
        if (diff < mn)
        {
            l = i - 1;
            r = i;
            mn = diff;
        }
    }
    int diff = abs(v[n] - v[1]);
    if (diff < mn)
    {
        l = n;
        r = 1;
    }
    cout << l << ' ' << r << endl;

    return 0;
}

// Problem : https://codeforces.com/contest/34/problem/A