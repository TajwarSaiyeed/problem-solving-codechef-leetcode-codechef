/*
    Author: Tajwar Saiyeed
    Date: 2024-08-31 23:49:29
    File: 1748. Sum of Unique Elements.cpp
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        int sum = 0;
        map<int, int> mp;
        for (auto num : nums)
            mp[num]++;
        for (auto num : nums)
            if (mp[num] == 1)
                sum += num;
        return sum;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 2};
    cout << solution.sumOfUnique(nums) << '\n';
    return 0;
}

// Problem : https://leetcode.com/problems/sum-of-unique-elements/