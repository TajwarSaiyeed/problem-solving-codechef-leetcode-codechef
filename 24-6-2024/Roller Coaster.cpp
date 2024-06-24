/*
    Author: Tajwar Saiyeed
    Date: 2024-06-24 07:49:55
    File: Roller Coaster.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, h;
        cin >> x >> h;
        cout << (x >= h ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT