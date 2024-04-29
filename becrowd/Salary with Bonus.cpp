/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 12:00:34
    File: Salary with Bonus.cpp
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

    string s;
    cin >> s;

    double salary, sales_total;
    cin >> salary >> sales_total;

    double percentage = (sales_total * 15) / 100;
    cout << "TOTAL = R$ " << dt(2) << salary + percentage << '\n';

    return 0;
}