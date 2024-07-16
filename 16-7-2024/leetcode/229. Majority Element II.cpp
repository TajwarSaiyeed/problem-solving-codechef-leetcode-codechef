/*
    Author: Tajwar Saiyeed
    Date: 2024-07-16 14:24:14
    File: 229. Majority Element II.cpp
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
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int count = n / 3;
        map<int, int> mp;
        set<int> st;
        vector<int> ans;
        for (auto &x : nums)
        {
            mp[x]++;
            if (mp[x] > count)
            {
                st.insert(x);
            }
        }

        for (auto it = st.begin(); it != st.end(); it++)
        {
            ans.push_back(*it);
        }

        return ans;
    }
};

void solve()
{
    Solution s1;
    vector<int> nums = {3, 2, 3};
    vector<int> ans = s1.majorityElement(nums);
    for (auto &x : ans)
        cout << x << " ";
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

// Problem : https://leetcode.com/problems/majority-element-ii/