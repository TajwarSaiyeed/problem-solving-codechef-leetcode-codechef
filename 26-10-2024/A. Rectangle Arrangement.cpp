/*
    Author: Tajwar Saiyeed
    Date: 2024-10-26 21:22:16
    File: A. Rectangle Arrangement.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, x,y;
    cin >> n;
    vector<int> w, h;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        w.push_back(x);
        h.push_back(y);
    }
    int mw = *max_element(w.begin(), w.end());
    int mh = *max_element(h.begin(), h.end());
    cout << 2 * (mw + mh) << endl;
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

// Problem : https://codeforces.com/contest/2027/problem/A