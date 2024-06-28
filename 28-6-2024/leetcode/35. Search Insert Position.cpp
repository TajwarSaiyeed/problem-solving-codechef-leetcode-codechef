/*
    Author: Tajwar Saiyeed
    Date: 2024-06-28 11:42:02
    File: 35. Search Insert Position.cpp
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
    int searchInsert(vector<int> &nums, int target)
    {
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        auto l = lower_bound(nums.begin(), nums.end(), target);
        return (int)(l - nums.begin());
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    Solution ob;
    cout << (ob.searchInsert(nums, target));

    return 0;
}