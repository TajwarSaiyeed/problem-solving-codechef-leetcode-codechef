/*
    Author: Tajwar Saiyeed
    Date: 2024-09-18 07:20:24
    File: Flip the cards.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;
        if (n == x)
            cout << 0 << '\n';
        else
            cout << min(n - x, x) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS