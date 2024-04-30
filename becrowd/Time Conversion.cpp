/*
    Author: Tajwar Saiyeed
    Date: 2024-04-30 08:22:34
    File: Time Conversion.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srtG(vll) sort(a.begin(), a.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int hr, min, sec;
    hr = min = sec = 0;
    if (N >= 3600)
    {
        hr = N / 3600;
        N -= hr * 3600;
    }
    if (N >= 60)
    {
        min = N / 60;
        N -= min * 60;
    }
    sec = N;
    cout << hr << ":" << min << ":" << sec << '\n';
    return 0;
}