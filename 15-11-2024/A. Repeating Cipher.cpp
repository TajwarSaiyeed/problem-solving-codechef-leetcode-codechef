/*
    Author: Tajwar Saiyeed
    Date: 2024-11-15 22:43:13
    File: A. Repeating Cipher.cpp
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int step = 1, i = 0;
    while (i < n)
    {
        cout << s[i];
        i += step;
        step++;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc = 1;
 
    while (tc--)
    {
        solve();
    }
 
    return 0;
}

// Problem : https://codeforces.com/contest/1095/problem/A