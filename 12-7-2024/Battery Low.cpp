/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:41:11
    File: Battery Low.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        cout << (x <= 15 ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BATTERYLOW