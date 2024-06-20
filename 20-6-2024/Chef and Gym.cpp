/*
    Author: Tajwar Saiyeed
    Date: 2024-06-20 18:21:08
    File: Chef and Gym.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (x + y <= z ? 2 : x <= z ? 1
                                         : 0)
             << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CGYM