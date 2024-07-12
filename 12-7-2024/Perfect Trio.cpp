/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 09:49:54
    File: Perfect Trio.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, c;
    cin >> tc;
    while (tc--)
    {
        cin >> a >> b >> c;
        int mx = max({a, b, c});
        cout << (mx == ((a + b + c) - mx) ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PERFECTTRIO