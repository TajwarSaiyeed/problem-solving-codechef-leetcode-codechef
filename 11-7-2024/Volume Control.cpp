/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 12:44:45
    File: Volume Control.cpp
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
        cout << abs(x - y) << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/VOLCONTROL