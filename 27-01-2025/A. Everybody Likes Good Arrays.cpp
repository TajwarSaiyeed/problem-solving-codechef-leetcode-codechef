/*
    Author: Tajwar Saiyeed
    Date: 2025-01-27 17:39:41
    File: A. Everybody Likes Good Arrays.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vll vector<ll>
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] % 2 == 0 and a[i] % 2 == 0)
        {
            ans++;
        }
        else if (a[i - 1] % 2 == 1 and a[i] % 2 == 1)
        {
            ans++;
        }
    }

    cout << ans << endl;
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