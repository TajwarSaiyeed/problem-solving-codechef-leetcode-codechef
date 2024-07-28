/*
    Author: Tajwar Saiyeed
    Date: 2024-07-18 10:08:12
    File: 448. Find All Numbers Disappeared in an Array.cpp
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
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> mp;
        for (auto &x : nums)
        {
            mp[x]++;
        }
        vector<int> v;
        sort(nums.begin(), nums.end());
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fr(i, 0, n)
    {
        cin >> v[i];
    }
    Solution s;
    vector<int> ans = s.findDisappearedNumbers(v);
    for (auto &x : ans)
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

// Problem : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/