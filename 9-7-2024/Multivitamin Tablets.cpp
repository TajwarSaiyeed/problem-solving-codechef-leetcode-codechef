/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 22:36:56
    File: Multivitamin Tablets.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        if (x * 3 <= y)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TABLETS