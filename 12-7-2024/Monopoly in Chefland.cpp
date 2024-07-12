/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:56:38
    File: Monopoly in Chefland.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, r1, r2, r3;
    cin >> tc;
    while (tc--)
    {
        cin >> r1 >> r2 >> r3;
        if ((r1 > r2 + r3) || (r2 > r1 + r3) || (r3 > r1 + r2))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MONOPOLY