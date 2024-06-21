/*
    Author: Tajwar Saiyeed
    Date: 2024-06-21 11:12:50
    File: Chef and Chocolates.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int c, x, y;
        cin >> c >> x >> y;
        cout << (c - x) * y << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFCHOCO