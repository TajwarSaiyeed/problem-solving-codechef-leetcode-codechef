/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 06:35:03
    File: Broken Phone.cpp
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
        cout << (x == y ? "ANY" : (x > y) ? "NEW PHONE"
                                          : "REPAIR")
             << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE