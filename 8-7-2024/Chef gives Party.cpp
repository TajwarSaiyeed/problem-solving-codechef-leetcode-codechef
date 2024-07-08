/*
    Author: Tajwar Saiyeed
    Date: 2024-07-08 21:19:07
    File: Chef gives Party.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x, k;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x >> k;
        cout << ((n <= k / x) ? "YES" : "NO") << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARTY2