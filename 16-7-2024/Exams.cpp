/*
    Author: Tajwar Saiyeed
    Date: 2024-07-16 08:13:57
    File: Exams.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y, z;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y >> z;
        cout << ((x * y) / 2 < z ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https: // www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF