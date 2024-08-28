/*
    Author: Tajwar Saiyeed
    Date: 2024-08-28 11:10:25
    File: Chef and Candies.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, n, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> x;
        if (x > n)
        {
            cout << 0 << '\n';
        }
        else
        {
            int need = n - x;
            int p = need / 4;
            if (need % 4 != 0)
            {
                p++;
            }
            cout << p << "\n";
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND