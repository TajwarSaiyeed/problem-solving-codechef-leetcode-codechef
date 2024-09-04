/*
    Author: Tajwar Saiyeed
    Date: 2024-09-04 23:30:58
    File: Good Program.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        double ans = n / (4 * 1.0);
        if (ans == (int)ans)
        {
            cout << "Good" << '\n';
        }
        else
        {
            cout << "Not Good" << '\n';
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE