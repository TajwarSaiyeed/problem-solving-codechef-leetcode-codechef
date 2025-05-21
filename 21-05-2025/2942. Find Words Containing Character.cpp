/*
    Author: Tajwar Saiyeed
    Date: 2025-05-21 19:37:32
    File: 2942. Find Words Containing Character.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        int i = 0;
        for (string word : words)
        {
            for (char ch : word)
            {
                if (ch == x)
                {
                    ans.push_back(i);
                    break;
                }
            }
            i++;
        }

        return ans;
    }
};

// Problem : https://leetcode.com/problems/find-words-containing-character