/*
    Author: Tajwar Saiyeed
    Date: 2025-05-25 17:59:03
    File: 2000. Reverse Prefix of Word.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int idx = -1;
        for (int i = 0; i < word.size(); i++)
        {
            if (ch == word[i])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            return word;
        string subs = word.substr(0, idx + 1);
        reverse(subs.begin(), subs.end());
        string ans = subs + word.substr(idx + 1, word.size());
        return ans;
    }
};

// Problem : https://leetcode.com/problems/reverse-prefix-of-word/