/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:23:59
    File: Insurance.cpp
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
        if (x == y)
            cout << x << "\n";
        else if (x > y)
            cout << y << "\n";
        else
            cout << x << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INSURANCE