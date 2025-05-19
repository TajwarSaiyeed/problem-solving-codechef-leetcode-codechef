/*
    Author: Tajwar Saiyeed
    Date: 2025-05-19 08:46:00
    File: 3024. Type of Triangle.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int x = nums[0], y = nums[1], z = nums[2];
        if (x + y <= z)
            return "none";
        else if (x == y and y == z)
            return "equilateral";
        else if (x == y || y == z || x == z)
            return "isosceles";
        else
            return "scalene";
    }
};

// Problem : https://leetcode.com/problems/type-of-triangle/