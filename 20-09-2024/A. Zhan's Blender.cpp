/*
    Author: Tajwar Saiyeed
    Date: 2024-09-21 16:33:51
    File: A. Zhan's Blender.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        int mn = min(x, y);
        int ans = a % mn == 0 ? ceil(a / mn) : ceil(a / mn) + 1;
        cout << ans << endl;
    }
    return 0;
}

// Problem : https://codeforces.com/contest/2013/problem/A