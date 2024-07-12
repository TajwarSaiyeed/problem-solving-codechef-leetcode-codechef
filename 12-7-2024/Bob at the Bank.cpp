/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:44:25
    File: Bob at the Bank.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, w, x, y, z;
    cin >> tc;
    while (tc--)
    {
        cin >> w >> x >> y >> z;
        cout << (w + x * z - y * z) << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BOBBANK