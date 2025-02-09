/*
    Author: Tajwar Saiyeed
    Date: 2025-02-09 20:37:47
    File: B_Skibidus_and_Ohio.cpp
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define string std::string
#define cin std::cin
#define cout std::cout

void solve()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1])
        {
            flag = true;
            break;
        }

    if (flag)
        cout << 1 << nl;
    else
    {
        cout << s.size() << nl;
    }
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