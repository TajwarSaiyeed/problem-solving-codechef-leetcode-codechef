/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 09:46:52
    File: Sum of Digits.cpp
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
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006