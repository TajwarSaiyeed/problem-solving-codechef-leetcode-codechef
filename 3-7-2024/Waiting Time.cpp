/*
    Author: Tajwar Saiyeed
    Date: 2024-07-03 07:45:43
    File: Waiting Time.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, k, x;
    cin >> tc;
    while (tc--)
    {
        cin >> k >> x;
        cout << (k * 7) - x << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WAITTIME