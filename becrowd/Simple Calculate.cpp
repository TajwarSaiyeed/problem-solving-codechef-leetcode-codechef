/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 14:43:02
    File: Simple Calculate.cpp
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

    int code1, code2, unit1, unit2;
    float price1, price2;
    cin >> code1 >> unit1 >> price1;
    cin >> code2 >> unit2 >> price2;

    cout << "VALOR A PAGAR: R$ " << dt(2) << (unit1 * price1) + (unit2 * price2) << '\n';

    return 0;
}