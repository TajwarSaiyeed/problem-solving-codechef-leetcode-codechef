/*
    Author: Tajwar Saiyeed
    Date: 2024-07-01 11:22:51
    File: Sum it.cpp
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
        cout << (a + b == c ? "YES" : "NO") << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SUMM