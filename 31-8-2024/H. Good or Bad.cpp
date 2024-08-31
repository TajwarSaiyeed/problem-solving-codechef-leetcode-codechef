/*
    Author: Tajwar Saiyeed
    Date: 2024-08-31 22:57:20
    File: H. Good or Bad.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)

void solve()
{
    string s;
    cin >> s;
    string sub1 = "101", sub2 = "010";
    int n = s.size();
    fr(i, 0, n) if (s.substr(i, 3) == sub1 || s.substr(i, 3) == sub2)
    {
        cout << "Good" << nl;
        return;
    }
    cout << "Bad" << nl;
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

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H