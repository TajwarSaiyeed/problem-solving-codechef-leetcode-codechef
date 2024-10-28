/*
    Author: Tajwar Saiyeed
    Date: 2024-10-27 22:11:55
    File: A. Div. 7.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 7 == 0)
        cout << n << endl;
    else
    {
        int x = n % 10;
        for (int i = 0; i < 10; i++)
        {
            if ((n - x + i) % 7 == 0)
            {
                cout << n - x + i << endl;
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1633/problem/A