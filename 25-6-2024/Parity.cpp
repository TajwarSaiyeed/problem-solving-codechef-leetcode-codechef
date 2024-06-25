/*
    Author: Tajwar Saiyeed
    Date: 2024-06-25 18:39:21
    File: Parity.cpp
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
        cout << (x % 2 == 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PAR2