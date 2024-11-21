/*
    Author: Tajwar Saiyeed
    Date: 2024-11-21 21:03:37
    File: J. Waiting for....cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int p = 0;

    while (n--)
    {
        char ch;
        int num;
        cin >> ch >> num;

        if (ch == 'P')
        {
            p += num;
        }
        else if (ch == 'B')
        {
            if (num > p)
            {
                cout << "YES\n";
                p = 0;
            }
            else
            {
                cout << "NO\n";
                p -= num;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
