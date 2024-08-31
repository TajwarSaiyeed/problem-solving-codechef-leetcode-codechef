/*
    Author: Tajwar Saiyeed
    Date: 2024-08-31 23:07:47
    File: Air Conditioner Temperature.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, a, b, c;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c;
        if (a > b || c > b)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP