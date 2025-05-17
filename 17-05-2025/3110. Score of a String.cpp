/*
    Author: Tajwar Saiyeed
    Date: 2025-05-17 21:04:05
    File: 3110. Score of a String.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {
        int ans = 0;
        for (int i = 1; i < s.size(); i++)
        {
            int x = s[i];
            int y = s[i - 1];
            ans += abs(x - y);
        }

        return ans;
    }
};

// Problem : https://leetcode.com/problems/score-of-a-string/