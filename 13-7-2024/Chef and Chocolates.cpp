/*
    Author: Tajwar Saiyeed
    Date: 2024-07-13 14:01:14
    File: Chef and Chocolates.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (x * 5 + y * 10) / z << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CCHOCOLATES