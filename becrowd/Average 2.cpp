/*
    Author: Tajwar Saiyeed
    Date: 2024-04-29 11:49:14
    File: Average 2.cpp
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
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    float a, b, c;
    cin >> a >> b >> c;

    cout << "MEDIA = " << fixed << setprecision(1) << (a * 2 + b * 3 + c * 5) / (2 + 3 + 5) << '\n';
    return 0;
}
