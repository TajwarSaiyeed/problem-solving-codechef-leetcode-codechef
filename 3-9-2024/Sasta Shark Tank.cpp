/*
    Author: Tajwar Saiyeed
    Date: 2024-09-03 22:07:12
    File: Sasta Shark Tank.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b;
        int x = (a * 100) / 10;
        int y = (b * 100) / 20;
        cout << (x == y ? "ANY" : x > y ? "First"
                                        : "Second")
             << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST