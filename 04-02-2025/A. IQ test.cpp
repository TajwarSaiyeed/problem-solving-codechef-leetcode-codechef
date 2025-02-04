/*
    Author: Tajwar Saiyeed
    Date: 2025-02-04 19:10:03
    File: A. IQ test.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define cin std::cin
#define cout std::cout

void solve()
{
    int n;
    cin >> n;

    int even = 0, odd = 0, evenIndex = 0, oddIndex = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            even++;
            evenIndex = i;
        }
        else
        {
            odd++;
            oddIndex = i;
        }
    }

    if (even == 1)
        cout << evenIndex << nl;
    else
        cout << oddIndex << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :