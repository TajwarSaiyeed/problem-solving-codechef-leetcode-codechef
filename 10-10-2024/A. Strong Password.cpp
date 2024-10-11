/*
    Author: Tajwar Saiyeed
    Date: 2024-10-10 23:27:20
    File: A. Strong Password.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    string s, ans = "";
    cin >> s;

    int l = s.size();

    for (int i = 0; i < l; i++)
    {
        if (i == l - 1)
        {
            ans += s + (s[l - 1] == 'a' ? "b" : "a");
            break;
        }
        if (s[i] == s[i + 1])
        {
            if (s[i] == 'a')
            {
                ans = s.substr(0, i + 1) + "b" + s.substr(i + 1, l - 1);
                break;
            }
            else
            {
                ans = s.substr(0, i + 1) + "a" + s.substr(i + 1, l - 1);
                break;
            }
        }
    }

    cout << ans << nl;
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

// Problem : https://codeforces.com/contest/1997/problem/A