/*
    Author: Tajwar Saiyeed
    Date: 2024-06-30 21:55:37
    File: Four Tickets.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        cout << (x * 4 <= 1000 ? "YES" : "NO") << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FOURTICKETS