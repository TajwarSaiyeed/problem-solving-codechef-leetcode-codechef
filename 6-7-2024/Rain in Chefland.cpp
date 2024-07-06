/*
    Author: Tajwar Saiyeed
    Date: 2024-07-06 05:29:00
    File: Rain in Chefland.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        if (x >= 7)
            cout << "HEAVY" << "\n";
        else if (x >= 3 && x < 7)
            cout << "MODERATE" << "\n";
        else
            cout << "LIGHT" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/RAINFALL1