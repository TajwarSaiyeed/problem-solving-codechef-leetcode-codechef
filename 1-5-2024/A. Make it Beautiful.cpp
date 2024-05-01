/*
    Author: Tajwar Saiyeed
    Date: 2024-05-01 06:13:46
    File: A. Make it Beautiful.cpp
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
        int n;
        cin >> n;
        vi a(n);
        fr(i, 0, n) cin >> a[i];
        if (a[0] == a[n - 1])
        {
            no;
        }
        else
        {
            yes;
            cout << *a.begin() << " ";
            nfr(i, n - 1, 0) cout << a[i] << " ";
            cout << nl;
        }
    }
    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1783/A