/*
    Author: Tajwar Saiyeed
    Date: 2024-07-29 18:06:46
    File: Find maximum in an Array.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n, x;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        cout << (*max_element(v.begin(), v.end())) << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A