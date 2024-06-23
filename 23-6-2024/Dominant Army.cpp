/*
    Author: Tajwar Saiyeed
    Date: 2024-06-23 14:07:20
    File: Dominant Army.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int nA, nB, nC;
        cin >> nA >> nB >> nC;
        int mx = max({nA, nB, nC});
        if ((mx == nA && nA > nB + nC) || (mx == nB && nB > nA + nC) || (mx == nC && nC > nA + nB))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOMINANT