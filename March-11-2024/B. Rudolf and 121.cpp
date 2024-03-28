/*
    Author: Tajwar Saiyeed
    Date: 2024-03-28 12:26:11
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] == 0)
                continue;
            else if (a[i] < 0)
            {
                flag = false;
                break;
            }
            else
            {
                a[i + 1] -= 2 * a[i];
                a[i + 2] -= a[i];
            }
        }

        if (a[n - 1] == 0 && a[n - 2] == 0 && flag)
            yes;
        else
            no;
    }
    return 0;
}

// Problem : https://codeforces.com/contest/1941/problem/B
