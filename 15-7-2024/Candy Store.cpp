/*
    Author: Tajwar Saiyeed
    Date: 2024-07-15 08:10:13
    File: Candy Store.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y <= x)
        {
            cout << y << '\n';
        }
        else
        {
            cout << ((y - x) * 2 + x) << '\n';
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CANDYSTORE