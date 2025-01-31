/*
    Author: Tajwar Saiyeed
    Date: 2025-01-31 19:27:48
    File: A. Vasya and Socks.cpp
*/
#include <bits/stdc++.h>
#define cin std::cin
#define cout std::cout
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    while (n > 0)
    {
        ans++;
        if (ans % m == 0)
            n++;
        n--;
    }

    cout << ans << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
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