/*
    Author: Tajwar Saiyeed
    Date: 2024-08-29 11:57:30
    File: Is the Score Consistent.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, a, b, c, d;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c >> d;
        if (c < a || d < b)
        {
            cout << "IMPOSSIBLE" << '\n';
        }
        else
        {
            cout << "POSSIBLE" << '\n';
        }
    }
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE