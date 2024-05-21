/*
    Author: Tajwar Saiyeed
    Date: 2024-05-21 23:39:11
    File: A. Anton and Danik.cpp
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

    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll a = 0, d = 0;
    fr(i, 0, n)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
        cout << "Anton" << nl;
    else if (d > a)
        cout << "Danik" << nl;
    else
        cout << "Friendship" << nl;

    return 0;
}