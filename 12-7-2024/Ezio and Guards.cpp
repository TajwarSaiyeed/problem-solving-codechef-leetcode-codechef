/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 05:56:09
    File: Ezio and Guards.cpp
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
        cout << (x >= y ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANIPULATE