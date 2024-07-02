/*
    Author: Tajwar Saiyeed
    Date: 2024-07-02 07:17:54
    File: Messi vs Ronaldo.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    bool equal = A * 2 + B == X * 2 + Y;
    bool Messi = A * 2 + B > X * 2 + Y;

    if (equal)
    {
        cout << "Equal" << "\n";
    }
    else if (Messi)
    {
        cout << "Messi" << "\n";
    }
    else
    {
        cout << "Ronaldo" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MVR