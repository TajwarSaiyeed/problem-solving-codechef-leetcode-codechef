/*
    Author: Tajwar Saiyeed
    Date: 2025-01-18 20:48:48
    File: Q1. Maximum Difference Between Adjacent Elements in a Circular Array.cpp
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
#define dt(n) fixed << setprecision(n)
typedef long long ll;

class Solution
{
public:
    int maxAdjacentDistance(vector<int> &nums)
    {
        int n = nums.size();
        int maxDiff = 0;
        for (int i = 0; i < n; ++i)
        {
            int diff;
            if (i == n - 1)
            {
                diff = abs(nums[i] - nums[0]);
            }
            else
            {
                diff = abs(nums[i] - nums[i + 1]);
            }
            maxDiff = max(maxDiff, diff);
        }

        return maxDiff;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    vector<int> nums = {1, 2, 10, 6};
    cout << ob.maxAdjacentDistance(nums) << nl;

    return 0;
}

// Problem :