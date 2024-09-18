/*
    Author: Tajwar Saiyeed
    Date: 2024-09-16 12:29:12
    File: Different Consecutive Characters.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, n, ans;
    string s;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> s;
        ans = 0;
        for (int i = 0; i < n - 1; i++)
            if (s[i] == s[i + 1])
                ++ans;
        cout << ans << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/strings/STRINGS/problems/DIFFCONSEC