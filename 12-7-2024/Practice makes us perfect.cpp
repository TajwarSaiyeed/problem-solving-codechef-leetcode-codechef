/*
    Author: Tajwar Saiyeed
    Date: 2024-07-12 10:14:16
    File: Practice makes us perfect.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        if (x >= 10)
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRACTICEPERF