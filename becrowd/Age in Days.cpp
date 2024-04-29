/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 14:52:40
    File: Age in Days.cpp
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

    int value;
    cin >> value;

    int year, month, day;
    year = month = day = 0;

    if (value >= 365)
    {
        year = value / 365;
        value -= year * 365;
    }

    if (value >= 30)
    {
        month = value / 30;
        value -= month * 30;
    }

    day = value;

    cout
        << year << " ano(s)\n"
        << month << " mes(es)\n"
        << day << " dia(s)\n";

    return 0;
}