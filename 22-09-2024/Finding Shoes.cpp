/*
    Author: Tajwar Saiyeed
    Date: 2024-09-22 22:35:28
    File: Finding Shoes.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << max(0, n - m) + n << endl;
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES