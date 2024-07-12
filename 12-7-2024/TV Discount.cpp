/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 06:31:42
    File: TV Discount.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, c, d;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c >> d;
        if (a - c == b - d)
            cout << "Any" << '\n';
        else if (a - c < b - d)
            cout << "First" << '\n';
        else
            cout << "Second" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TVDISC