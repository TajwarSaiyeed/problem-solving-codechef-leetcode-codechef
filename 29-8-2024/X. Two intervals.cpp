/*
    Author: Tajwar Saiyeed
    Date: 2024-08-29 14:14:08
    File: X. Two intervals.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 > r1 || l1 > r2)
    {
        cout << -1 << '\n';
    }
    else
    {
        vector<long long> a = {l1, l2, r1, r2};
        sort(a.begin(), a.end());
        cout << a[1] << ' ' << a[2] << "\n";
    }

    return 0;
}

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X