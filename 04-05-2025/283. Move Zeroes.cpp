/*
    Author: Tajwar Saiyeed
    Date: 2025-05-04 22:16:50
    File: 283. Move Zeroes.cpp
*/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int x = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[x]);
                x++;
            }
        }
    }
};

void solve()
{
    Solution sol;
    vector<int> n = {5, 0, 3, 0, 23};
    sol.moveZeroes(n);
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

// Problem : https://leetcode.com/problems/move-zeroes/description/