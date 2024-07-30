/*
    Author: Tajwar Saiyeed
    Date: 2024-07-29 18:38:32
    File: CRED Coins.cpp
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
        if (x * y < 100)
            cout << 0 << "\n";
        else
            cout << ((x * y) / 100) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS