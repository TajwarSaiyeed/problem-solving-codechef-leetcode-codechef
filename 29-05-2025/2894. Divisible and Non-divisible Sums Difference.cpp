/*
    Author: Tajwar Saiyeed
    Date: 2025-05-29 21:45:31
    File: 2894. Divisible and Non-divisible Sums Difference.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int count = n / m;
        int sumDivisible = (m * count * (count + 1));
        int totalSum = (n * (n + 1)) / 2;
        return totalSum - sumDivisible;
    }
};

// Problem : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/