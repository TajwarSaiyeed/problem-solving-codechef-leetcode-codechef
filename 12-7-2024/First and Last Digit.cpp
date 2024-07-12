/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:07:40
    File: First and Last Digit.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int first = 0;
        int last = n % 10;
        while (n)
        {
            first = n % 10;
            n /= 10;
        }
        cout << first + last << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW004