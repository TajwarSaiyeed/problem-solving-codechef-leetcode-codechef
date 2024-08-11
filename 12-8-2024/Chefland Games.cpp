/*
    Author: Tajwar Saiyeed
    Date: 2024-08-12 00:16:26
    File: Chefland Games.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int r1, r2, r3, r4;
        cin >> r1 >> r2 >> r3 >> r4;
        if (r1 == 0 and r1 == r2 and r2 == r3 and r3 == r4)
            cout << "IN" << "\n";
        else
            cout << "OUT" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES