/*
    Author: Tajwar Saiyeed
    Date: 2024-07-06 05:31:00
    File: Chess Time.cpp
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
        cout << (n * 60) / 20 << "\n";
    }
    return 0;
}

// Problem : https: // www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHESSTIME