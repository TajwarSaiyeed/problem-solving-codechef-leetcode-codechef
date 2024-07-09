/*
    Author: Tajwar Saiyeed
    Date: 2024-07-09 22:52:00
    File: H. One Prime.cpp
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

vector<bool> prime(100005, true);
void sieve()
{

    prime[0] = prime[1] = false;

    for (int i = 2; i * i < 100005; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < 100005; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int n;
    cin >> n;

    prime[n] ? cout << "YES\n" : cout << "NO\n";

    return 0;
}

// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H