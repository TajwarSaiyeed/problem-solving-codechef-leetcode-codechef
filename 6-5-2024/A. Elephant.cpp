/*
    Author: Tajwar Saiyeed
    Date: 2024-05-06 08:21:17
    File: A. Elephant.cpp
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

    int x;
    cin >> x;
    int steps = 0;
    while (x > 0)
    {
        x -= 5;
        steps++;
    }
    cout << steps << '\n';
    return 0;
}

// https://codeforces.com/contest/617/problem/A

// https://codeforces.com/contest/617/submission/259703236