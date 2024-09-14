/*
    Author: Tajwar Saiyeed
    Date: 2024-09-14 12:16:42
    File: Airlines.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, n;
        cin >> x >> n;
        int av = x * 100;
        if (av > n)
        {
            cout << 0 << endl;
        }
        else
        {
            int need = ceil((n - av) / (100 * 1.0));
            cout << need << endl;
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2