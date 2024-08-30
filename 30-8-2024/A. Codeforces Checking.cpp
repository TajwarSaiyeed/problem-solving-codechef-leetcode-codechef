/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 06:56:15
    File: A. Codeforces Checking.cpp
*/

#include <bits/stdc++.h>

using namespace std;

#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

void solve()
{
    string s = "codeforces";
    char ch;
    cin >> ch;
    auto found = s.find(ch);
    if (found != string::npos)
        yes;
    else
        no;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}

// Problem : https://codeforces.com/problemset/problem/1791/A