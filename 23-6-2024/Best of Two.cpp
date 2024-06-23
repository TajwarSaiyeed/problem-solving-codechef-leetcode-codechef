/*
    Author: Tajwar Saiyeed
    Date: 2024-06-23 13:58:20
    File: Best of Two.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        cout << max(x, y) << '\n';
    }
    return 0;
}

// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO