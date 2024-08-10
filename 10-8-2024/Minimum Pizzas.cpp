/*
    Author: Tajwar Saiyeed
    Date: 2024-08-10 22:26:44
    File: Minimum Pizzas.cpp
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
        if ((n * x) % 4 == 0)
        {
            cout << ((n * x) / 4) << "\n";
        }
        else
        {
            cout << ((n * x) / 4) + 1 << "\n";
        }
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA