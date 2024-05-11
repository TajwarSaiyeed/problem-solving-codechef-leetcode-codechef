/*
    Author: Tajwar Saiyeed
    Date: 2024-05-11 11:49:07
    File: A. Codeforces Checking.cpp
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
    string s = "codeforces";
    while (tc--)
    {
        char ch;
        cin >> ch;
        if (s.find(ch) != string::npos)
            yes;
        else
            no;
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1791/A
// Submission : https://codeforces.com/contest/1791/submission/260489956