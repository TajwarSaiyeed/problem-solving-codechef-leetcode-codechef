/*
    Author: Tajwar Saiyeed
    Date: 2024-07-07 18:32:31
    File: MATH1 Enrolment.cpp
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
        if (x > y)
        {
            cout << 0 << "\n";
            continue;
        }

        cout << y - x << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/M1ENROL