/*
    Author: Tajwar Saiyeed
    Date: 2024-07-05 07:51:35
    File: 287. Find the Duplicate Number.cpp
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
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        int result = -1;
        for (int x : nums)
        {
            if (mp[x] == 1)
            {
                result = x;
                break;
            }
            else
            {
                mp[x]++;
            }
        }

        return result;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << ob.findDuplicate(nums) << nl;

    return 0;
}

// Problem: https://leetcode.com/problems/find-the-duplicate-number/