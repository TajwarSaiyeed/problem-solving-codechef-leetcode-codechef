/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 13:19:01
    File: Profit Increment.cpp
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
        cout << ((x / 100 * 10) + y) << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PROINC