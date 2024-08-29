/*
    Author: Tajwar Saiyeed
    Date: 2024-08-29 12:13:30
    File: Monopoly.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, p, q, r, s;
    cin >> tc;
    while (tc--)
    {
        cin >> p >> q >> r >> s;
        int sum = p + q + r + s;
        int mx = max({p, q, r, s});
        if (mx > (sum - mx))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2