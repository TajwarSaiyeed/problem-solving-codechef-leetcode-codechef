/*
    Author: Tajwar Saiyeed
    Date: 2025-01-26 10:37:43
    File: B. Journey.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    ll n;
    int a, b, c;
    cin >> n >> a >> b >> c;

    ll sum = a + b + c;

    ll ans = n / sum;

    n -= (ans * sum);

    ans = ans * 3;

    if (n != 0)
    {
        if (n > a + b)
        {
            ans += 3;
        }
        else if (n > a)
        {
            ans += 2;
        }
        else
        {
            ans++;
        }
    }

    cout << ans << nl;
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

// Problem :