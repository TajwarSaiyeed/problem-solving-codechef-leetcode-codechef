/*
    Author: Tajwar Saiyeed
    Date: 2025-04-19 20:11:18
    File: Q1. Find Closest Person.cpp
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int xz = abs(x - z);
        int yz = abs(y - z);
        if (xz == yz)
            return 0;
        else if (xz < yz)
            return 1;
        else
            return 2;
    }
};

int main()
{
    Solution sol;
    sol.findClosest(5, 3, 9);
    return 0;
}

// Problem : https://leetcode.com/contest/weekly-contest-445/problems/find-closest-person/