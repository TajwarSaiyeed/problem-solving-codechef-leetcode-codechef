/*
    Author: Tajwar Saiyeed
    Date: 2024-09-21 16:13:11
    File: Bath in Winters.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (2 * y > x)
            cout << 0 << '\n';
        else
            cout << (x / (2 * y)) << '\n';
    }
    return 0;
}

// Problem : codechef.com/practice/course/logical-problems/DIFF800/problems/BATH