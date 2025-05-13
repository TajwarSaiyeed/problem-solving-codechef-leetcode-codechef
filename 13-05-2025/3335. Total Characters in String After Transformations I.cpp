/*
    Author: Tajwar Saiyeed
    Date: 2025-05-13 22:43:36
    File: 3335. Total Characters in String After Transformations I.cpp
*/
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
class Solution
{
public:
    int lengthAfterTransformations(string s, int t)
    {
        vector<long long> mp(26, 0);

        for (char ch : s)
        {
            mp[ch - 'a']++;
        }

        for (int i = 0; i < t; ++i)
        {
            vector<long long> temp(26, 0);
            for (int j = 0; j < 26; ++j)
            {
                if (mp[j] == 0)
                    continue;

                if (j == 25)
                {
                    temp[0] = (temp[0] + mp[j]) % MOD;
                    temp[1] = (temp[1] + mp[j]) % MOD;
                }
                else
                {
                    temp[j + 1] = (temp[j + 1] + mp[j]) % MOD;
                }
            }
            mp = move(temp);
        }

        long long ans = 0;
        for (int i = 0; i < 26; ++i)
        {
            ans = (ans + mp[i]) % MOD;
        }

        return (int)ans;
    }
};

// Problem : https://leetcode.com/problems/total-characters-in-string-after-transformations-i