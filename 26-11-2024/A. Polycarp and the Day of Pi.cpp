/*
    Author: Tajwar Saiyeed
    Date: 2024-11-26 21:22:09
    File: A. Polycarp and the Day of Pi.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{

    string s, pi = "314159265358979323846264338327";
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != pi[i])
        {
            cout << i << nl;
            return;
        }
    }

    cout << n << nl;
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

// Problem : https://codeforces.com/problemset/problem/1790/A