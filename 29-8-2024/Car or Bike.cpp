/*
    Author: Tajwar Saiyeed
    Date: 2024-08-29 11:38:06
    File: Car or Bike.cpp
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
        if (x < y)
            cout << "BIKE" << '\n';
        else if (x > y)
            cout << "CAR" << '\n';
        else
            cout << "SAME" << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST
