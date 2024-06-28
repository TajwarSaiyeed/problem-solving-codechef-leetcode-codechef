/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 11:43:24
    File: 34. Find First and Last Position of Element in Sorted Array.cpp
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
    vector<int> searchRange(vector<int> &nums, int target)
    {
        auto lr = lower_bound(nums.begin(), nums.end(), target);
        auto ur = upper_bound(nums.begin(), nums.end(), target);
        if (lr != nums.end() && *lr == target)
            return {(int)(lr - nums.begin()), (int)(ur - nums.begin()) - 1};
        return {-1, -1};
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution ob;
    vector<int> ans = ob.searchRange(nums, target);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}