/*
    Author: Tajwar Saiyeed
    Date: 2024-07-17 22:49:20
    File: 75. Sort Colors.cpp
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
    void sortColors(vector<int> &nums)
    {
        multiset<int> mlt;
        for (int x : nums)
        {
            mlt.insert(x);
        }
        nums.clear();
        for (auto it : mlt)
        {
            nums.push_back(it);
        }
    }
};

void solve()
{
    Solution s1;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    s1.sortColors(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }
    cout << nl;
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

// Problem : https://leetcode.com/problems/sort-colors/