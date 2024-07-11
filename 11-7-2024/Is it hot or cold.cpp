/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 13:14:02
    File: Is it hot or cold.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, c;
    cin >> tc;
    while (tc--)
    {
        cin >> c;
        cout << (c > 20 ? "HOT" : "COLD") << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HOTCOLD