/*
    Author: Tajwar Saiyeed
    Date: 2024-06-23 14:37:46
    File: Miami GP.cpp
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
        cout << ((floor(x * 1.07) >= y) ? "YES" : "NO") << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/F1RULE