/*
    Author: Tajwar Saiyeed
    Date: 2024-06-25 18:27:47
    File: A. Dislike of Threes.cpp
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

int arr[1001];

void not_three(int n)
{
    int i = 1;
    int j = 1;
    while (i <= n)
    {
        if (j % 3 != 0 && j % 10 != 3)
        {
            arr[i] = j;
            i++;
        }
        j++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;
        not_three(x);
        cout << arr[x] << nl;
    }

    return 0;
}

// Problem : https://codeforces.com/problemset/problem/1560/A