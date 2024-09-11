/*
    Author: Tajwar Saiyeed
    Date: 2024-09-09 17:28:30
    File: Test Score.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x >> y;
        if (y % x == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE