/*
    Author: Tajwar Saiyeed
    Date: 2025-01-26 21:06:54
    File: b.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] <= i * 2) || (a[i] <= (n - i - 1) * 2))
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
