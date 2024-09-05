/*
    Author: Tajwar Saiyeed
    Date: 2024-09-05 12:30:03
    File: 540. Single Element in a Sorted Array.cpp
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int ans = nums[0];
        for (int i = 1; i < nums.size(); ++i)
            ans ^= nums[i];
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 3, 3, 3, 10, 3, 3, 3, 3};
    cout << sol.singleNonDuplicate(nums) << endl;
    return 0;
}

// Problem : https://leetcode.com/problems/single-element-in-a-sorted-array/