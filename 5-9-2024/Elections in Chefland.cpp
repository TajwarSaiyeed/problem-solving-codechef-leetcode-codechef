/*
    Author: Tajwar Saiyeed
    Date: 2024-09-05 23:05:20
    File: Elections in Chefland.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            if (y >= x)
                result++;
        }
        cout << result << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN