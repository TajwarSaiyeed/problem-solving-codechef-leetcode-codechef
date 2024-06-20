/*
    Author: Tajwar Saiyeed
    Date: 2024-06-20 18:20:06
    File: Bull or Bear.cpp
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
        cout << (x < y ? "PROFIT" : x > y ? "LOSS"
                                          : "NEUTRAL")
             << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BULLBEAR