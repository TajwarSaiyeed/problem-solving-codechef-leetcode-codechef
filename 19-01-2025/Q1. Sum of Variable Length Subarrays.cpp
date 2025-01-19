/*
    Author: Tajwar Saiyeed
    Date: 2025-01-19 09:37:55
    File: Q1. Sum of Variable Length Subarrays.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Solution
{
public:
    int subarraySum(vector<int> &nums)
    {
        int t_sum = 0;
        int sz = nums.size();
        for (int i = 0; i < sz; i++)
        {
            int start = max(0, i - nums[i]);
            for (int j = start; j <= i; ++j)
            {
                t_sum += nums[j];
            }
        }
        return t_sum;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    vector<int> nums = {1, 4, 2, 5, 3};
    cout << ob.subarraySum(nums) << nl;

    return 0;
}
