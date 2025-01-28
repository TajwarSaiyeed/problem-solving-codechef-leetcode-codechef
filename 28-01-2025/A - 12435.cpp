/*
    Author: Tajwar Saiyeed
    Date: 2025-01-28 18:48:33
    File: A - 12435.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
#define nl '\n'
#define vi vector<int>

void solve()
{
    vi v1(5);
    for (int i = 0; i < 5; i++)
        cin >> v1[i];

    for (int i = 0; i < 4; i++)
    {
        vi v2 = v1;
        swap(v2[i], v2[i + 1]);
        if (is_sorted(v2.begin(), v2.end()))
        {
            yes;
            return;
        }
    }

    no;
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

// Problem : Atcoder