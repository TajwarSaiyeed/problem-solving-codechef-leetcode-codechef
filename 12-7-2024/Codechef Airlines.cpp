/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:33:11
    File: Codechef Airlines.cpp
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
        int total = 10 * x;
        if (y < total)
        {
            cout << y * z << "\n";
        }
        else
        {
            cout << total * z << "\n";
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRLINES