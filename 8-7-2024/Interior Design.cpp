/*
    Author: Tajwar Saiyeed
    Date: 2024-07-08 21:19:37
    File: Interior Design.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x1, x2, y1, y2;
    cin >> tc;
    while (tc--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << min(x1 + y1, x2 + y2) << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INTRDSGN