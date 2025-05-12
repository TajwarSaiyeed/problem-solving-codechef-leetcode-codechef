/*
    Author: Tajwar Saiyeed
    Date: 2025-05-12 06:23:44
    File: 2828. Check if a String Is an Acronym of Words.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        if (words.size() != s.size())
            return false;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != words[i][0])
                return false;
        }

        return true;
    }
};
// Problem : https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/