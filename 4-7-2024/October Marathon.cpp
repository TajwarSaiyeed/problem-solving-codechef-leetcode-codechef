/*
    Author: Tajwar Saiyeed
    Date: 2024-07-04 06:21:27
    File: October Marathon.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string res = (x < 3) ? "GOLD" : (x >= 3 && x < 6) ? "SILVER"
                                                      : "BRONZE";
    cout << res << "\n";
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/OCTATHON