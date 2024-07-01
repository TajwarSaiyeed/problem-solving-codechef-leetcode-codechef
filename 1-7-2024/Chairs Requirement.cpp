/*
    Author: Tajwar Saiyeed
    Date: 2024-07-01 10:46:44
    File: Chairs Requirement.cpp
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
        cout << (x < y ? 0 : x - y) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHAIRS_