/*
    Author: Tajwar Saiyeed
    Date: 2024-09-02 22:41:18
    File: Reverse The Number.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        cout << stoi(s) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007