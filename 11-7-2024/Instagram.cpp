/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 08:28:01
    File: Instagram.cpp
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
        cout << (x > 10 * y ? "YES" : "NO") << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/INSTAGRAM