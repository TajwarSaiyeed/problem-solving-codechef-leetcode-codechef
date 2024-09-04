/*
    Author: Tajwar Saiyeed
    Date: 2024-09-04 23:31:24
    File: Qualify the round.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> a >> b;
        if (x <= (a * 1 + b * 2))
            cout << "Qualify" << '\n';
        else
            cout << "NotQualify" << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY