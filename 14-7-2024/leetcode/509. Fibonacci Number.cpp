/*
    Author: Tajwar Saiyeed
    Date: 2024-07-14 17:46:33
    File: 509. Fibonacci Number.cpp
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

class Solution
{
public:
    int fib(int n)
    {
        int arr[31];
        for (int i = 0; i < 31; i++)
        {
            arr[i] = -1;
        }
        arr[0] = 0;
        arr[1] = 1;

        if (n == 0 || n == 1)
        {
            return n;
        }

        if (arr[n] != -1)
        {
            return arr[n];
        }

        return arr[n] = fib(n - 1) + fib(n - 2);
    }
};

void solve()
{
    Solution s1;
    int n;
    cin >> n;
    cout << s1.fib(n) << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://leetcode.com/problems/fibonacci-number/