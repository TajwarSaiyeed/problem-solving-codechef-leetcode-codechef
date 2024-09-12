/*
    Author: Tajwar Saiyeed
    Date: 2024-09-12 18:02:36
    File: Recent contest problems.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, st = 0, lt = 0;
        cin >> n;
        while (n--)
        {
            string s;
            cin >> s;
            if (s == "START38")
                st++;
            else
                lt++;
        }
        cout << st << " " << lt << "\n";
    }

    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT