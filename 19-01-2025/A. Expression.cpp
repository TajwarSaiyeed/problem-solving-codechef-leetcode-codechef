/*
    Author: Tajwar Saiyeed
    Date: 2025-01-19 22:22:01
    File: A. Expression.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = max({a + b + c, a * b * c, a * b + c, a + b * c, a * (b + c), (a + b) * c});
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}


// Problem : 