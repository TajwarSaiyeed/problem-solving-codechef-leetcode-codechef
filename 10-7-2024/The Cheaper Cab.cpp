/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 12:57:32
    File: The Cheaper Cab.cpp
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
        cout << (x == y ? "ANY" : min(x, y) == x ? "FIRST"
                                                 : "SECOND")
             << "\n";
    }
    return 0;
}

// Problem : https://codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CABS