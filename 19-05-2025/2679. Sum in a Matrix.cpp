/*
    Author: Tajwar Saiyeed
    Date: 2025-05-19 08:47:12
    File: 2679. Sum in a Matrix.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        for (vector<int> &row : nums)
        {
            sort(row.begin(), row.end(), greater<int>());
        }

        int ans = 0;
        for (int j = 0; j < nums[0].size(); ++j)
        {
            int mx = 0;
            for (int i = 0; i < nums.size(); ++i)
            {
                mx = max(mx, nums[i][j]);
            }
            ans += mx;
        }

        return ans;
    }
};

// Problem : https: // leetcode.com/problems/sum-in-a-matrix/