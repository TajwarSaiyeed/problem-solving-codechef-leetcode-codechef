/*
    Author: Tajwar Saiyeed
    Date: 2024-09-11 05:52:13
    File: Wordle.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t, ans = "";
        cin >> s >> t;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] != t[i])
                ans += "B";
            else
                ans += "G";
        }

        cout << ans << endl;
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/strings/STRINGS/problems/WORDLE