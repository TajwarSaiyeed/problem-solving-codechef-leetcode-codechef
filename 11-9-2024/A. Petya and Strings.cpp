/*
    Author: Tajwar Saiyeed
    Date: 2024-09-11 11:30:54
    File: A. Petya and Strings.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (a < b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 1 << endl;
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

// Problem :