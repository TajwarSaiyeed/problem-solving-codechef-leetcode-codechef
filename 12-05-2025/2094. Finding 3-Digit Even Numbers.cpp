/*
    Author: Tajwar Saiyeed
    Date: 2025-05-12 18:16:47
    File: 2094. Finding 3-Digit Even Numbers.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < digits.size(); i++)
        {
            mp[digits[i]]++;
        }

        for (int i = 100; i < 1000; i += 2)
        {
            v.push_back(i);
        }

        vector<int> ans;

        for (int x = 100; x < 1000; x += 2)
        {
            int f = x / 100, s = (x / 10) % 10, t = x % 10;
            auto tmp = mp;
            if (tmp[f]-- > 0 && tmp[s]-- > 0 && tmp[t]-- > 0)
            {
                ans.push_back(x);
            }
        }

        return ans;
    }
};

// Problem : https://leetcode.com/problems/finding-3-digit-even-numbers/