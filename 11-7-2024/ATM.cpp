/*
    Author: Tajwar Saiyeed
    Date: 2024-07-11 13:09:13
    File: ATM.cpp
*/

#include <bits/stdc++.h>
using namespace std;
#define dt(n) fixed << setprecision(n)

int main()
{
    int x;
    float y;
    cin >> x >> y;
    if (x + 0.50 > y)
    {
        cout << dt(2) << y << '\n';
    }
    else if (x % 5 != 0)
    {
        cout << dt(2) << y << '\n';
    }
    else
    {
        y -= (x + 0.50);
        cout << dt(2) << y << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST