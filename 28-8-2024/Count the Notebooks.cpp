/*
    Author: Tajwar Saiyeed
    Date: 2024-08-28 10:59:18
    File: Count the Notebooks.cpp
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
        cout << (n * 1000) / 100 << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NOTEBOOK