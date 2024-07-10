/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 12:34:22
    File: Six Friends.cpp
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
        cout << min(x * 3, y * 2) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SIXFRIENDS