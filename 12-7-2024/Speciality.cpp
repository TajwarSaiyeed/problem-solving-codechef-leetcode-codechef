/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 06:11:11
    File: Speciality.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y, z;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y >> z;
        int mx = max({x, y, z});
        if (x == mx)
            cout << "Setter" << "\n";
        else if (y == mx)
            cout << "Tester" << "\n";
        else
            cout << "Editorialist" << "\n";
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SPECIALITY