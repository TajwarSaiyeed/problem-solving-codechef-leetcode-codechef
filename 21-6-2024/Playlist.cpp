/*
    Author: Tajwar Saiyeed
    Date: 2024-06-21 11:20:21
    File: Playlist.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        cout << (n / x) / 3 << '\n';
    }
    return 0;
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SONGS