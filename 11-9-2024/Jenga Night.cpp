/*
    Author: Tajwar Saiyeed
    Date: 2024-09-11 05:50:50
    File: Jenga Night.cpp
*/

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

int main()
{
    int tc, n, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;
        if (n == x)
            yes;
        else if (x % n == 0)
            yes;
        else
            no;
    }

    return 0;
}

// Problem : https://codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA