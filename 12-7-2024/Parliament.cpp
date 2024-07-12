/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 05:45:01
    File: Parliament.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;
        cout << ((x >= float(n) / 2) ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARLIAMENT