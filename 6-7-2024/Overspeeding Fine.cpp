/*
    Author: Tajwar Saiyeed
    Date: 2024-07-06 05:30:25
    File: Overspeeding Fine.cpp
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
        cout << (x > 100 ? 2000 : x > 70 && x <= 100 ? 500
                                                     : 0)
             << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FINE