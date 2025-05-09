/*
    Author: Tajwar Saiyeed
    Date: 2025-05-09 06:32:30
    File: 14. Longest Common Prefix.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        string ans = "";

        string small = strs[0];
        for (auto str : strs)
        {
            int x = str.size();
            if (x < small.size())
            {
                small = str;
            }
        }

        map<string, int> mp;

        for (int i = 1; i <= small.size(); i++)
        {
            string x = small.substr(0, i);
            int cnt = small.size();
            for (int j = 0; j < strs.size(); j++)
            {
                string y = strs[j];
                if (x == y.substr(0, i))
                {
                    mp[x]++;
                }
            }
        }

        for (auto [x, y] : mp)
        {
            if (y == strs.size())
            {
                ans = x;
            }
        }

        return ans;
    }
};

// Problem : https://leetcode.com/problems/longest-common-prefix/