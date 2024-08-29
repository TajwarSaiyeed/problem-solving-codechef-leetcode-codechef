/*
    Author: Tajwar Saiyeed
    Date: 2024-08-29 14:28:33
    File: W. Mathematical Expression.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    switch (s)
    {
    case '+':
        if (a + b == c)
            cout << "Yes" << '\n';
        else
            cout << a + b << '\n';
        break;
    case '-':
        if (a - b == c)
            cout << "Yes" << '\n';
        else
            cout << a - b << '\n';
        break;
    case '*':
        if (a * b == c)
            cout << "Yes" << '\n';
        else
            cout << a * b << '\n';
        break;
    }

    return 0;
}

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W