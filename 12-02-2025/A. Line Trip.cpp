/*
    Author: Tajwar Saiyeed
    Date: 2025-02-12 19:14:52
    File: A. Line Trip.cpp
*/
#include <bits/stdc++.h>
#define nl "\n"
#define cin std::cin
#define cout std::cout
#define max std::max
#define vi std::vector<int>

void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    int mx = INT_MIN;
    int last = 2 * (x - a[n - 1]);
    for (int i = 0; i < n; i++)
        mx = max(mx, a[i + 1] - a[i]);
    cout << max(max(mx, a[0] - 0), last) << nl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem :