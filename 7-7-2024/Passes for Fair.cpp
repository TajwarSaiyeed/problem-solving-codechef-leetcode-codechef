/*
    Author: Tajwar Saiyeed
    Date: 2024-07-07 18:11:15
    File: Passes for Fair.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, k;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        cout << (n < k ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FAIRPASS