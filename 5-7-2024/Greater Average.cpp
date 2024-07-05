/*
    Author: Tajwar Saiyeed
    Date: 2024-07-05 08:02:42
    File: Greater Average.cpp
*/

#include <bits/stdc++.h>
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
using namespace std;

int main()
{
    int tc, a, b, c;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c;
        float avg = ((a + b) * 1.0) / 2;
        avg > c ? yes : no;
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM