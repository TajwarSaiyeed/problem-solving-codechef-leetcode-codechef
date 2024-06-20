/*
    Author: Tajwar Saiyeed
    Date: 2024-06-20 18:33:32
    File: Netflix.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        cout << (a + b >= x || b + c >= x || a + c >= x ? "YES" : "NO") << '\n';
    }
    return 0;
}

// Problem  : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/NETFLIX