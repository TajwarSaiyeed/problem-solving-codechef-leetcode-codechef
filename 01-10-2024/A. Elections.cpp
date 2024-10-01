/*
    Author: Tajwar Saiyeed
    Date: 2024-10-01 17:45:21
    File: A. Elections.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxVotes = max({a, b, c});

    int ansA = (a == maxVotes) ? (maxVotes == b || maxVotes == c ? 1 : 0) : (maxVotes - a + 1);
    int ansB = (b == maxVotes) ? (maxVotes == a || maxVotes == c ? 1 : 0) : (maxVotes - b + 1);
    int ansC = (c == maxVotes) ? (maxVotes == a || maxVotes == b ? 1 : 0) : (maxVotes - c + 1);

    cout << ansA << " " << ansB << " " << ansC << nl;
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

// Problem : https://codeforces.com/contest/1593/problem/A