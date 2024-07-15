/*
    Author: Tajwar Saiyeed
    Date: 2024-07-15 22:48:57
    File: 33. Search in Rotated Sorted Array.cpp
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
    int search(vector<int> &nums, int target)
    {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
        {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());

        int index = -1;
        int left = 0, right = nums.size() - 1, mid = 0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (v[mid].first == target)
            {
                index = v[mid].second;
                break;
            }

            if (v[mid].first < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return index;
    }
};

void solve()
{

    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << s.search(nums, target) << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://leetcode.com/problems/search-in-rotated-sorted-array/