/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:18:11
    File: Course Registration.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, m, k;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m >> k;
        cout << (m >= n + k ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/COURSEREG