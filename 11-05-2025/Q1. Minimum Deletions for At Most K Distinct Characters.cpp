/*
    Author: Tajwar Saiyeed
    Date: 2025-05-11 10:53:29
    File: Q1. Minimum Deletions for At Most K Distinct Characters.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDeletion(string s, int k)
    {
        map<char, int> mp;
        for (char ch : s)
        {
            mp[ch]++;
        }

        if (mp.size() <= k)
        {
            return 0;
        }

        vector<int> v;
        for (auto [x, y] : mp)
            v.push_back(y);
        sort(v.begin(), v.end());

        int ans = 0;
        for (int i = 0; i < mp.size() - k; i++)
            ans += v[i];
        return ans;
    }
};

// Problem : https://leetcode.com/problems/minimum-deletions-for-at-most-k-distinct-characters/
