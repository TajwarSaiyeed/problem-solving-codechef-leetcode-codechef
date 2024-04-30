/*
    Author: Tajwar Saiyeed
    Date: 2024-04-30 08:00:10
    File: Area.cpp
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

    double a, b, c;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << dt(3) << (a * c) / 2 << '\n';
    cout << "CIRCULO: " << dt(3) << 3.14159 * c * c << '\n';
    cout << "TRAPEZIO: " << dt(3) << ((a + b) * c) / 2 << '\n';
    cout << "QUADRADO: " << dt(3) << b * b << '\n';
    cout << "RETANGULO: " << dt(3) << a * b << '\n';
    return 0;
}