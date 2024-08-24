/*
    Author: Tajwar Saiyeed
    Date: 2024-08-24 22:05:03
    File: Chef and NextGen.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, a, b, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> x >> y;
        if (a * b <= x * y)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3