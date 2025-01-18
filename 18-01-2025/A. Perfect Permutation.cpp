/*
    Author: Tajwar Saiyeed
    Date: 2025-01-18 22:56:54
    File: A. Perfect Permutation.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1 << nl;
        return;
    }

    while (n--)
    {
        cout << n + 1 << " ";
    }
    cout << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
