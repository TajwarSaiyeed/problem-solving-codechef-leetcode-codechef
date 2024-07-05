/*
    Author: Tajwar Saiyeed
    Date: 2024-07-05 07:59:28
    File: Just One More Episode.cpp
*/

#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        x > 24 ? yes : no;
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ONEMORE