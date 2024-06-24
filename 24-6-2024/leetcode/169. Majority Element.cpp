/*
    Author: Tajwar Saiyeed
    Date: 2024-06-24 20:04:35
    File: 169. Majority Element.cpp
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
    int majorityElement(vector<int> &nums)
    {
        int mx = -1;
        map<int, int> mp;
        for (auto x : nums)
        {
            mp[x]++;
            if (mp[x] > mp[mx])
                mx = x;
        }
        return mx;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << solution.majorityElement(nums) << nl;

    return 0;
}

// Problem: https://leetcode.com/problems/majority-element/
// Submission : https://leetcode.com/submissions/detail/525073579/