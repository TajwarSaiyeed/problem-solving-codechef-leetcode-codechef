/*
    Author: Tajwar Saiyeed
    Date: 2024-08-16 11:35:21
    File: Expert Setter.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tc, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        double p = (y * 100) / x;
        if (p >= 50)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT