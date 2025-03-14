/*
    Author: Tajwar Saiyeed
    Date: 2025-03-14 19:28:18
    File: 2069A - Was there an Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s = "";
    for (int i = 0; i < n - 2; i++)
    {
        char c;
        cin >> c;
        s += c;
    }

    if (s.find("101") != string::npos)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// Problem : 