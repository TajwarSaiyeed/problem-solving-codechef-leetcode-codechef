/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 12:50:53
    File: Donation Rewards.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x;
    cin >> tc;
    while (tc--)
    {
        cin >> x;
        if (x > 6)
            cout << "GOLD" << "\n";
        else if (x > 3 and x <= 6)
            cout << "SILVER" << "\n";
        else
            cout << "BRONZE" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD