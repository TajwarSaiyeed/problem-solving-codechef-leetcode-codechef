/*
    Author: Tajwar Saiyeed
    Date: 2024-11-09 22:07:57
    File: C. Compare.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    string x, y;
    cin >> x >> y;
    if (x == y)
        cout << x << nl;
    else if (x < y)
        cout << x << nl;
    else
        cout << y << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    while (tc--)
        solve();

    return 0;
}
