/*
    Author: Tajwar Saiyeed
    Date: 2024-07-07 18:10:39
    File: Read Pages.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x >> y;
        cout << (n <= x * y ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/READPAGES