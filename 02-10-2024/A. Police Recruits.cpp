/*
    Author: Tajwar Saiyeed
    Date: 2024-10-02 21:56:00
    File: A. Police Recruits.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int police = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            police += x;
        }
        else
        {
            if (police == 0)
            {
                ans++;
            }
            else
            {
                police--;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

// Problem : https://codeforces.com/contest/427/problem/A