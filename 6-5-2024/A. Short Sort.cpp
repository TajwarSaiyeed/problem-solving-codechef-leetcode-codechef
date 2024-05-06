/*
    Author: Tajwar Saiyeed
    Date: 2024-05-06 10:57:19
    File: A. Short Sort.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(a.begin(), a.end())
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        if (s[0] != 'a')
            cnt++;
        if (s[1] != 'b')
            cnt++;
        if (s[2] != 'c')
            cnt++;

        if (cnt <= 2)
            yes;
        else
            no;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1873/A
// Submission: https://codeforces.com/contest/1873/submission/259704886