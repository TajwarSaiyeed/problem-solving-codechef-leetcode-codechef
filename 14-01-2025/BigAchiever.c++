/*
    Author: Tajwar Saiyeed
    Date: 2025-01-14 19:21:01
    File: BigAchiever.c++
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
        cin >> n;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x >= mx)
            {
                mx = x;
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
