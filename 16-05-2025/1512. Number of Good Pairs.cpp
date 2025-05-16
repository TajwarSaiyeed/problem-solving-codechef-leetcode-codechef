/*
    Author: Tajwar Saiyeed
    Date: 2025-05-16 19:41:34
    File: 1512. Number of Good Pairs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j] and i < j)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};

// Problem : https://leetcode.com/problems/number-of-good-pairs/