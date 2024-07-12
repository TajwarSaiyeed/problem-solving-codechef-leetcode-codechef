/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 11:01:26
    File: Bucket and Water Flow.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, w, x, y, z;
    cin >> tc;
    while (tc--)
    {
        cin >> w >> x >> y >> z;
        int tw = w + y * z;
        if (tw == x)
            cout << "filled" << "\n";
        else if (tw > x)
            cout << "overFlow" << "\n";
        else
            cout << "Unfilled" << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERFLOW