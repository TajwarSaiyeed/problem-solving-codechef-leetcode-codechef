/*
    Author: Tajwar Saiyeed
    Date: 2025-05-18 22:26:29
    File: Q1. Smallest Index With Digit Sum Equal to Index.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            int sum = 0;
            while (x)
            {
                sum += x % 10;
                x /= 10;
            }

            if (sum == i)
                return i;
        }
        return -1;
    }
};

// Problem : https://leetcode.com/contest/weekly-contest-450/problems/smallest-index-with-digit-sum-equal-to-index/