/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:52:35
    File: The Mango Truck.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y, z;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y >> z;
        cout << (z - y) / x << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANGOES