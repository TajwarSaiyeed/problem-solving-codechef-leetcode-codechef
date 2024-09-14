/*
    Author: Tajwar Saiyeed
    Date: 2024-09-14 20:52:32
    File: A. Simple Palindrome.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string vowels = "aeiou";
    string result;
    for (int i = 0; i < n; i++)
    {
        result += vowels[i % 5];
    }
    sort(result.begin(), result.end());
    cout << result << '\n';
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

// Problem : https://codeforces.com/contest/2005/problem/A