/*
    Author: Tajwar Saiyeed
    Date: 2024-10-21 22:40:38
    File: L. New Array.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sz = 2 * n;
    vector<int> arr(sz);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i + n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L