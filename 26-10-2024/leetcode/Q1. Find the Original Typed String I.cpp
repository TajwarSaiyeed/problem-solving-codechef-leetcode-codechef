/*
    Author: Tajwar Saiyeed
    Date: 2024-10-26 22:24:53
    File: Q1. Find the Original Typed String I.cpp
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int possibleStringCount(string word)
    {
        int ans = 1;
        int n = word.length();
        int i = 0;
        while (i < n)
        {
            int count = 1;

            while (i + 1 < n && word[i] == word[i + 1])
            {
                count++;
                i++;
            }

            ans += count - 1;
            i++;
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.possibleStringCount("abbcccc") << endl;
    return 0;
}

// Problem : https://leetcode.com/contest/biweekly-contest-142/problems/find-the-original-typed-string-i/