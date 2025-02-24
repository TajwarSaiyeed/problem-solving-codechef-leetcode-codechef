/*
    Author: Tajwar Saiyeed
    Date: 2025-02-24 10:53:10
    File: A. I Wanna Be the Guy.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define vi vector<int>

void solve()
{
    int levels, p, q;
    set<int> st;

    cin >> levels;
    cin >> p;
    vi a(p);
    for (auto &x : a)
    {
        cin >> x;
        st.insert(x);
    }
    cin >> q;
    vi b(q);
    for (auto &y : b)
    {
        cin >> y;
        st.insert(y);
    }

    cout << (st.size() == levels ? "I become the guy." : "Oh, my keyboard!") << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/469/problem/A