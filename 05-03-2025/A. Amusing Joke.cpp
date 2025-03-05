/*
    Author: Tajwar Saiyeed
    Date: 2025-03-05 21:59:39
    File: A. Amusing Joke.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

void solve()
{
    string guest, host, gh;
    cin >> guest >> host >> gh;

    vector<int> f(26, 0);
    vector<int> cf(26, 0);
    for (int i = 0; i < guest.size(); i++)
    {
        f[guest[i] - 'A']++;
    }

    for (int i = 0; i < host.size(); i++)
    {
        f[host[i] - 'A']++;
    }

    for (int i = 0; i < gh.size(); i++)
    {
        cf[gh[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] != cf[i])
        {
            no;
            return;
        }
    }

    yes;
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