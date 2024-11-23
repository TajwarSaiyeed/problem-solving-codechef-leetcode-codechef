/*
    Author: Tajwar Saiyeed
    Date: 2024-11-23 21:29:37
    File: V. Is it rated.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    bool flag = false;
    for (int i = 0; i < n; ++i)
    {
        if (v[i].first != v[i].second)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "rated" << endl;
        return;
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i].first < v[i + 1].first)
        {
            cout << "unrated" << endl;
            return;
        }
    }

    cout << "maybe" << endl;
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