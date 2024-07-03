/*
    Author: Tajwar Saiyeed
    Date: 2024-07-03 07:46:33
    File: 1509. Minimum Difference Between Largest and Smallest Value in Three Moves.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

class Solution
{
public:
    int minDifference(vector<int> &nums)
    {
        if (nums.size() < 5)
        {
            return 0;
        }
        vector<int> cp = nums;
        sort(nums.begin(), nums.end());
        sort(cp.rbegin(), cp.rend());
        int j = cp[3] - nums[0];
        int k = cp[2] - nums[1];
        int l = cp[1] - nums[2];
        int m = cp[0] - nums[3];
        return min({j, k, l, m});
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution *sl = new Solution();
    vector<int> nums = {1, 5, 0, 10, 14};

    cout << sl->minDifference(nums) << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves