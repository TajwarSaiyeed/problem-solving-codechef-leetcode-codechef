/*
    Author: Tajwar Saiyeed
    Date: 2024-07-07 18:35:40
    File: Final Population.cpp
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
        cout << (x - y + z) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/POPULATION