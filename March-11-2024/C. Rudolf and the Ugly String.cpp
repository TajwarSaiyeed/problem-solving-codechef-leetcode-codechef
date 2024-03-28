/*
    Author: Tajwar Saiyeed
    Date: 2024-03-28 13:22:16
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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
        string s;
        cin >> s;
        ll ans = 0;
        int i = 0;
        while (i < n)
        {
            if (s.substr(i, 5) == "mapie")
            {
                ans++;
                i += 5;
            }
            else if ((s.substr(i, 3) == "pie" || s.substr(i, 3) == "map"))
            {
                ans++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1941/problem/C