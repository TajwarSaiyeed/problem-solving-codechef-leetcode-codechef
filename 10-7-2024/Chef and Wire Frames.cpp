/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 12:28:37
    File: Chef and Wire Frames.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, m, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m >> x;
        cout << (2 * n + 2 * m) * x << "\n";
    }

    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CWIREFRAME