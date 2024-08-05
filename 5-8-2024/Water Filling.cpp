/*
    Author: Tajwar Saiyeed
    Date: 2024-08-05 21:27:20
    File: Water Filling.cpp
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
        if (x == 0 && y == 0 || x == 0 && z == 0 || y == 0 && z == 0)
        {
            cout << "Water filling time" << "\n";
        }
        else
        {
            cout << "Not now" << "\n";
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING