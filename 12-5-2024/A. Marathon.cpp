/*
    Author: Tajwar Saiyeed
    Date: 2024-05-12 06:49:51
    File: A. Marathon.cpp
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
        int a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;
        if (b > a && c > a && d > a)
            ans = 3;
        else if ((b > a && c > a) || (b > a && d > a) || (c > a && d > a))
            ans = 2;
        else if ((b > a) || (c > a) || (d > a))
            ans = 1;
        cout << ans << '\n';
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1692/A
// Submission : https://codeforces.com/contest/1692/submission/260595041