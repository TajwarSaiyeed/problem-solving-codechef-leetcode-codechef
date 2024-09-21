/*
    Author: Tajwar Saiyeed
    Date: 2024-09-21 22:52:55
    File: V. Frequency Array.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int freq[m + 1] = {0};
    for (int i = 0; i < n; i++)
        freq[a[i]]++;
    for (int i = 1; i <= m; i++)
        cout << freq[i] << "\n";
    return 0;
}

// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V