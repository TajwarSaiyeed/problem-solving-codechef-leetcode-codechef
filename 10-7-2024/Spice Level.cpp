/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 12:43:36
    File: Spice Level.cpp
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
            cout << "HOT" << "\n";
        else if (x >= 4 and x < 7)
            cout << "MEDIUM" << "\n";
        else
            cout << "MILD" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE