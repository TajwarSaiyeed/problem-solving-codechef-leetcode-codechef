/*
    Author: Tajwar Saiyeed
    Date: 2024-05-02 10:47:02
    File: Welcome to the Winter.cpp
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

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && b <= c)
        cout << ":)" << nl;
    else if (a < b && b >= c)
        cout << ":(" << nl;
    else if (a < b && b < c && (b - a) > (c - b))
        cout << ":(" << nl;
    else if (a < b && b < c && (b - a) <= (c - b))
        cout << ":)" << nl;
    else if (a > b && b > c && (b - c) < (a - b))
        cout << ":)" << nl;
    else if (a > b && b > c && (b - c) >= (a - b))
        cout << ":(" << nl;
    else if (a == b && b < c)
        cout << ":)" << nl;
    else if (a == b && b >= c)
        cout << ":(" << nl;

    return 0;
}

// Submission : https://judge.beecrowd.com/en/runs/code/39529729