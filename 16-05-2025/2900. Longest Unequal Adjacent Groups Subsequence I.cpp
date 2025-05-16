/*
    Author: Tajwar Saiyeed
    Date: 2025-05-16 19:40:23
    File: 2900. Longest Unequal Adjacent Groups Subsequence I.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> getLongestSubsequence(vector<string> &words,
                                         vector<int> &groups)
    {
        vector<string> ans;
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || groups[i] != groups[i - 1])
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};

// Problem : https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/