/*
    Author: Tajwar Saiyeed
    Date: 2025-03-15 21:56:06
    File: B. Multiply by 2 divide by 6.cpp
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    int ans = 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else if (n % 3 == 0)
        {
            n *= 2;
        }
        else
        {
            ans = -1;
            break;
        }
        ans++;
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
