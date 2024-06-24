/*
    Author: Tajwar Saiyeed
    Date: 2024-06-24 20:02:40
    File: 11. Container With Most Water.cpp
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
    int maxArea(vector<int> &height)
    {
        int maxWater = 0, left = 0, right = height.size() - 1;
        while (left < right)
        {
            int w = right - left;
            int h = min(height[left], height[right]);
            maxWater = max(w * h, maxWater);
            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return maxWater;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << solution.maxArea(height) << nl;

    return 0;
}

// Problem: https://leetcode.com/problems/container-with-most-water/
// Submission : https://leetcode.com/problems/container-with-most-water/submissions/1298749594/