/*
    Author: Tajwar Saiyeed
    Date: 2024-07-08 21:20:03
    File: Car Trip.cpp
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
        cout << (x <= 300 ? 3000 : x * 10) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CARTRIP