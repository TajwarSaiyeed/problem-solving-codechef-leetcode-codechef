/*
    Author: Tajwar Saiyeed
    Date: 2024-07-08 18:43:11
    File: 507. Perfect Number.cpp
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
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        for (int i = 1; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
                if (i * i != num)
                {
                    sum += num / i;
                }
            }
        }

        sum -= num;

        return num == sum;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    cout << sol.checkPerfectNumber(28) << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/perfect-number