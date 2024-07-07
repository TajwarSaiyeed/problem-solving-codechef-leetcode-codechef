/*
    Author: Tajwar Saiyeed
    Date: 2024-07-07 18:34:02
    File: Lunchtime.cpp
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
        cout << ((x >= 1 && x <= 4) ? "YES" : "NO") << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/LTIME