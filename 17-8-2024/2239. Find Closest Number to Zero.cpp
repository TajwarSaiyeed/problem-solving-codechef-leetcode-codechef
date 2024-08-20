/*
    Author: Tajwar Saiyeed
    Date: 2024-08-17 11:17:00
    File: 2239. Find Closest Number to Zero.cpp
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
    int findClosestNumber(vector<int> &nums)
    {
        int mn = nums[0];
        for (auto x : nums)
            if (abs(x) < abs(mn))
                mn = x;

        auto f = find(nums.begin(), nums.end(), abs(mn));
        // cout << bool(f - nums.begin()) <<endl;

        if (mn < 0 and f != nums.end())
            return abs(mn);

        return mn;
    }
};

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }

    Solution s;
    cout << s.findClosestNumber(a) << nl;
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

// Problem : https://leetcode.com/problems/find-closest-number-to-zero/
// Submission : https://leetcode.com/problems/find-closest-number-to-zero/submissions/1358514586/