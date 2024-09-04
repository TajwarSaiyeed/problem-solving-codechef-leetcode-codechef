/*
    Author: Tajwar Saiyeed
    Date: 2024-09-04 22:45:04
    File: A. Ultra-Fast Mathematician.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    string ans = "";
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] != b[i])
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    }
    cout << ans << '\n';
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

// Problem :