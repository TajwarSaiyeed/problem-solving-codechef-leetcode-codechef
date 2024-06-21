/*
    Author: Tajwar Saiyeed
    Date: 2024-06-21 11:09:22
    File: IPL Ticket Rush.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        cout << (m >= n ? 0 : n - m) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH