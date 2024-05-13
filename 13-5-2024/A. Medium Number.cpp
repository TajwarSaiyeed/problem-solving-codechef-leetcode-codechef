/*
    Author: Tajwar Saiyeed
    Date: 2024-05-13 10:48:52
    File: A. Medium Number.cpp
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
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
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
        vi a(3);
        fr(i, 0, 3) cin >> a[i];
        srt(a);
        cout << a[1] << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/contest/1760/problem/A
// Submission : https://codeforces.com/contest/1760/submission/260742399