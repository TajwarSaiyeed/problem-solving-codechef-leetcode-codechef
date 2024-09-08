/*
    Author: Tajwar Saiyeed
    Date: 2024-09-08 22:57:30
    File: DNA Storage.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, ans = "";
        cin >> s;

        for (int i = 0; i < n; i += 2)
        {
            string x = s.substr(i, 2);
            if (x == "00")
                ans += 'A';
            else if (x == "01")
                ans += 'T';
            else if (x == "10")
                ans += 'C';
            else
                ans += 'G';
        }

        cout << ans << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/strings/STRINGS/problems/DNASTORAGE