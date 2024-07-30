/*
    Author: Tajwar Saiyeed
    Date: 2024-07-29 18:33:28
    File: Search an element in an array.cpp
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int l = 0, r = n - 1, mid = -1;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] == x)
        {
            cout << "YES" << "\n";
            return 0;
        }

        if (x > v[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << "NO" << '\n';
    return 0;
}

// Problem : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR