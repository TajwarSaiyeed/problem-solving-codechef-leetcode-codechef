/*
    Author: Tajwar Saiyeed
    Date: 2024-07-05 07:53:35
    File: 41. First Missing Positive.cpp
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
    int firstMissingPositive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        ll mx = *max_element(nums.begin(), nums.end());
        long long i = 1;
        for (i = 1; i < mx + 1; i++)
        {
            auto l = lower_bound(nums.begin(), nums.end(), i);
            if (*l != i)
            {
                break;
            }
        }
        return i;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    vector<int> nums = {1, 2, 0};

    cout << ob.firstMissingPositive(nums) << nl;

    return 0;
}

// Problem: https://leetcode.com/problems/first-missing-positive/