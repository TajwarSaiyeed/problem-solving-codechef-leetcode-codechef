/*
    Author: Tajwar Saiyeed
    Date: 2025-05-20 21:08:34
    File: 1684. Count the Number of Consistent Strings.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        vector<int> alp(26, 0);
        for (char ch : allowed)
            alp[ch - 'a']++;

        int ans = 0;

        for (string word : words)
        {
            bool x = true;
            for (char ch : word)
            {
                if (alp[ch - 'a'] == 0)
                {
                    x = false;
                    break;
                }
            }

            if (x)
                ans++;
        }

        return ans;
    }
};

// Problem : https://leetcode.com/problems/count-the-number-of-consistent-strings/