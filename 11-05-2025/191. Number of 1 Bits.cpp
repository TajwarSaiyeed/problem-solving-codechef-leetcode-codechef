/*
    Author: Tajwar Saiyeed
    Date: 2025-05-11 11:31:14
    File: 191. Number of 1 Bits.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {

        string b;
        while (n > 0)
        {
            b += (n % 2) + '0';
            n /= 2;
        }

        int cnt = count(b.begin(), b.end(), '1');

        return cnt;
    }
};

// Problem : https://leetcode.com/problems/number-of-1-bits/