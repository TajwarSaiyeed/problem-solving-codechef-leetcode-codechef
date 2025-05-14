/*
    Author: Tajwar Saiyeed
    Date: 2025-05-14 21:37:31
    File: 1897. Redistribute Characters to Make All Strings Equal.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool makeEqual(vector<string> &words)
    {
        map<char, int> mp;
        for (string &word : words)
        {
            for (char &ch : word)
            {
                mp[ch]++;
            }
        }
        for (auto [x, y] : mp)
        {
            if (y % words.size() != 0)
                return false;
        }

        return true;
    }
};

// Problem : https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/