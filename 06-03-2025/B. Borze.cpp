/*
    Author: Tajwar Saiyeed
    Date: 2025-03-06 20:07:24
    File: B. s.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.length();)
    {
        if (s[i] == '.')
        {
            ans += '0';
            i++;
        }
        else if (i + 1 < s.length() && s[i] == '-' && s[i + 1] == '.')
        {
            ans += '1';
            i += 2;
        }
        else if (i + 1 < s.length() && s[i] == '-' && s[i + 1] == '-')
        {
            ans += '2';
            i += 2;
        }
    }

    cout << ans << endl;
    return 0;
}