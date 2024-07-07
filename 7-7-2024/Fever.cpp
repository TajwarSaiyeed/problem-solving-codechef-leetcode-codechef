/*
    Author: Tajwar Saiyeed
    Date: 2024-07-07 18:08:56
    File: Fever.cpp
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
        cout << (x > 98 ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FEVER