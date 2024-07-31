/*
    Author: Tajwar Saiyeed
    Date: 2024-07-31 17:47:04
    File: Favourite Numbers.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 2 == 0 and a % 7 == 0)
            cout << "Alice" << "\n";
        else if (a % 2 == 1 and a % 9 == 0)
            cout << "Bob" << "\n";
        else
            cout << "Charlie" << '\n';
    }

    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FAVOURITENUM