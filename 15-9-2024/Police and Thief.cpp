/*
    Author: Tajwar Saiyeed
    Date: 2024-09-15 14:14:47
    File: Police and Thief.cpp
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
        cout << abs(x - y) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF