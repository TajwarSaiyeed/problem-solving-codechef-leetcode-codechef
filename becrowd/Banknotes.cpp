/*
    Author: Tajwar Saiyeed
    Date: 2024-04-30 08:33:10
    File: Banknotes.cpp
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

    ll n;
    cin >> n;
    cout << n << '\n';
    ll h = n / 100;
    n -= h * 100;
    ll f = n / 50;
    n -= f * 50;
    ll tw = n / 20;
    n -= tw * 20;
    ll te = n / 10;
    n -= te * 10;
    ll fi = n / 5;
    n -= fi * 5;
    ll t = n / 2;
    n -= t * 2;
    ll o = n / 1;

    cout << h << " nota(s) de R$ 100,00" << '\n';
    cout << f << " nota(s) de R$ 50,00" << '\n';
    cout << tw << " nota(s) de R$ 20,00" << '\n';
    cout << te << " nota(s) de R$ 10,00" << '\n';
    cout << fi << " nota(s) de R$ 5,00" << '\n';
    cout << t << " nota(s) de R$ 2,00" << '\n';
    cout << o << " nota(s) de R$ 1,00" << '\n';
    return 0;
}