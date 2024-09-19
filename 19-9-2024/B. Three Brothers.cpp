/*
    Author: Tajwar Saiyeed
    Date: 2024-09-19 06:13:04
    File: B. Three Brothers.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if ((a == 1 or b == 1) and (b == 2 or a == 2))
        cout << 3;
    else if ((a == 1 or a == 3) and (b == 3 or b == 1))
        cout << 2;
    else
        cout << 1;
    cout << "\n";
}

// Problem : https://codeforces.com/problemset/problem/2010/B