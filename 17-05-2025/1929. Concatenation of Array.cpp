/*
    Author: Tajwar Saiyeed
    Date: 2025-05-17 21:04:46
    File: 1929. Concatenation of Array.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};

// Problem : https://leetcode.com/problems/concatenation-of-array/