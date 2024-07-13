/*
    Author: Tajwar Saiyeed
    Date: 2024-07-13 11:58:37
    File: Subscriptions.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    float n, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;
        if (n <= 6)
            cout << x << '\n';
        else
            cout << ceil(n / 6) * x << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_