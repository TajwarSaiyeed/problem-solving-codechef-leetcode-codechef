/*
    Author: Tajwar Saiyeed
    Date: 2025-05-15 07:09:56
    File: 70. Climbing Stairs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int f = 1;
        int s = 1;

        for (int i = 1; i < n; i++)
        {
            int nx = f + s;
            f = s;
            s = nx;
        }

        return s;
    }
};

// Problem : https://leetcode.com/problems/climbing-stairs/