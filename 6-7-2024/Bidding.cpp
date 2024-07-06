/*
    Author: Tajwar Saiyeed
    Date: 2024-07-06 05:29:34
    File: Bidding.cpp
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
        cout << ((mx == a) ? "Alice" : (mx == b) ? "Bob"
                                                 : "Charlie")
             << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUCTION