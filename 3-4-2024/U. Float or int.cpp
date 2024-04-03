/*
    Author: Tajwar Saiyeed
    Date: 2024-04-03 22:57:09
*/
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n'
#define vll vector<ll>
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double N;
    cin >> N;

    if (N == (int)N)
        cout << "int " << N << '\n';
    else
        cout << "float " << (int)N << " " << N - (int)N << '\n';

    return 0;
}