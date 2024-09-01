/*
    Author: Tajwar Saiyeed
    Date: 2024-09-01 23:34:04
    File: Nearest Exit.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        if (x > 50)
        {
            cout << "RIGHT" << "\n";
        }
        else
        {
            cout << "LEFT" << '\n';
        }
    }

    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT