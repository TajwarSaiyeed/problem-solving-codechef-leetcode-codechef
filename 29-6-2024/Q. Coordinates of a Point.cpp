/*
    Author: Tajwar Saiyeed
    Date: 2024-06-29 21:50:29
    File: Q. Coordinates of a Point.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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

    float x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Origem" << nl;
    else if (x == 0)
        cout << "Eixo Y" << nl;
    else if (y == 0)
        cout << "Eixo X" << nl;
    else if (x > 0 && y > 0)
        cout << "Q1" << nl;
    else if (x < 0 && y > 0)
        cout << "Q2" << nl;
    else if (x < 0 && y < 0)
        cout << "Q3" << nl;
    else
        cout << "Q4" << nl;

    return 0;
}

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q