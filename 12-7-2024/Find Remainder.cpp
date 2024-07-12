/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 05:52:57
    File: Find Remainder.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        cout << (a - (a / b * b)) << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW002