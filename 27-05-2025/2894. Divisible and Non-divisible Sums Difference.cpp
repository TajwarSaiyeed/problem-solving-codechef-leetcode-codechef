/*
    Author: Tajwar Saiyeed
    Date: 2025-05-27 19:56:41
    File: 2894. Divisible and Non-divisible Sums Difference.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int n1 = 0, n2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m != 0)
                n1 += i;
        }

        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
                n2 += i;
        }

        return n1 - n2;
    }
};

class OptimizedSolution
{

public:
    int differenceOfSums(int n, int m)
    {
        int count = n / m;
        int sumDivisible = (m * count * (count + 1)) / 2;
        int totalSum = (n * (n + 1)) / 2;
        return totalSum - sumDivisible * m;
    }
};

// Problem : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/