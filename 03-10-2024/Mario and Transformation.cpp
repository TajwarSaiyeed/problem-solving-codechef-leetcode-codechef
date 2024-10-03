/*
    Author: Tajwar Saiyeed
    Date: 2024-10-03 21:34:05
    File: Mario and Transformation.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vs vector<string>
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vs v = {"SMALL", "NORMAL", "HUGE"};
    int ans = 1;
    for (int i = 0; i < n; i++)
        if (ans > 1)
            ans = 0;
        else
            ans++;

    cout << v[ans] << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}

// Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM