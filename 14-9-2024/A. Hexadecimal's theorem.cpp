/*
    Author: Tajwar Saiyeed
    Date: 2024-09-14 12:28:28
    File: A. Hexadecimal's theorem.cpp
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> fibo(1e5);

void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << ' ' << 0 << ' ' << 0 << '\n';
        return;
    }
    else if (n == 1)
    {
        cout << 1 << ' ' << 0 << ' ' << 0 << '\n';
        return;
    }
    auto it = find(fibo.begin(), fibo.end(), n);
    int idx = it - fibo.begin() + 1;
    cout << fibo[idx - 2] << ' ' << fibo[idx - 3] << ' ' << 0 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < 1e5; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://codeforces.com/contest/199/problem/A