/*
    Author: Tajwar Saiyeed
    Date: 2024-10-04 06:42:53
    File: A. Simple Palindrome.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define srt(vll) sort(vll.begin(), vll.end())
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string vowels = "aeiou", result = "";
    for (int i = 0; i < n; i++)
    {
        result += vowels[i % 5];
    }
    srt(result);
    cout << result << nl;
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