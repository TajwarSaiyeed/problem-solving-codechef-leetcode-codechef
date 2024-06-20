/*
    Author: Tajwar Saiyeed
    Date: 2024-06-20 18:16:56
    File: Second Max of Three Numbers.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
}

// Problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SNDMAX