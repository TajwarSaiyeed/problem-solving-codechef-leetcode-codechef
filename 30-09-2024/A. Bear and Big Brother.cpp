/*
    Author: Tajwar Saiyeed
    Date: 2024-09-30 21:30:45
    File: A. Bear and Big Brother.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count;
}

// Problem : https://codeforces.com/problemset/problem/791/A