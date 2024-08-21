/*
    Author: Tajwar Saiyeed
    Date: 2024-08-21 07:24:57
    File: 4. Median of Two Sorted Arrays.cpp
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
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size(), n = nums2.size();
        vector<int> merge;
        for (int i = 0; i < m; ++i)
            merge.push_back(nums1[i]);

        for (int i = 0; i < n; ++i)
            merge.push_back(nums2[i]);

        sort(merge.begin(), merge.end());
        double ans = 0;
        double mid = (m + n) / 2;
        // cout << mid << " " << merge.size() << '\n';
        if ((m + n) % 2 == 0)
        {
            ans = double(merge[mid - 1] + merge[mid]) / 2;
            // cout << merge[mid-1] << " " << merge[mid] << '\n';
        }
        else
        {
            ans = double(merge[mid]);
            // cout<<merge[mid] << " " << merge[mid-1] << "\n";
        }
        return ans;
    }
};

void solve()
{
    Solution s1;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << s1.findMedianSortedArrays(nums1, nums2) << '\n';
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

// Problem : https://leetcode.com/problems/median-of-two-sorted-arrays/