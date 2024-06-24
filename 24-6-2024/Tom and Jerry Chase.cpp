/*
    Author: Tajwar Saiyeed
    Date: 2024-06-24 21:54:47
    File: Tom and Jerry Chase.cpp
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
        cout << (y > x ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/JERRYCHASE