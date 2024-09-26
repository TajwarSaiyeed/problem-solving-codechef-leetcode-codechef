/*
    Author: Tajwar Saiyeed
    Date: 2024-09-26 21:05:13
    File: A. George and Accommodation.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (p + 2 <= q)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}

// Problem : https://codeforces.com/contest/467/problem/A