/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 06:03:38
    File: Chef and Masks.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        bool equal = (x * 100 == y * 10);
        if (equal)
            cout << "Cloth" << "\n";
        else if (x * 100 > y * 10)
            cout << "Cloth" << "\n";
        else
            cout << "Disposable" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CMASKS