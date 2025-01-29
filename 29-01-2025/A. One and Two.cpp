/*
    Author: Tajwar Saiyeed
    Date: 2025-01-29 15:15:45
    File: A. One and Two.cpp
*/
#include <bits/stdc++.h>
#define cin std::cin
#define cout std::cout
#define nl '\n'
#define vi std::vector<int>
typedef long long ll;

void solve()
{
    int n, twos = 0;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 2)
            twos++;
    }

    for (int i = 1; i < n; i++)
    {
        int leftTwos = count(v.begin(), v.begin() + i, 2);
        int rightTwos = twos - leftTwos;
        if (leftTwos == rightTwos)
        {
            cout << i << nl;
            return;
        }
    }
    cout << -1 << nl;
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