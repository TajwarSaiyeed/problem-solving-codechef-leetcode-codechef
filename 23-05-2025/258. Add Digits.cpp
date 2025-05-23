/*
    Author: Tajwar Saiyeed
    Date: 2025-05-23 21:20:47
    File: 258. Add Digits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        if (num == 0)
            return 0;
        return 1 + (num - 1) % 9;
    }
};

// Problem : https://leetcode.com/problems/add-digits