/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 18:18:21
    File: Problems in your to-do list.cpp
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vector<int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= 1000)
                cnt++;
        }
        cout << cnt << endl;
    }
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST