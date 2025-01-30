/*
    Author: Tajwar Saiyeed
    Date: 2025-01-30 07:54:40
    File: A. Case of the Zeros and Ones.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define cin std::cin
#define cout std::cout
#define string std::string
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeros = count(s.begin(), s.end(), '0');
    int ones = n - zeros;
    cout << abs(zeros - ones) << nl;
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

// Problem : https://codeforces.com/contest/556/problem/A