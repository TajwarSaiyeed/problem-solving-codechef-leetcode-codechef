/*
    Author: Tajwar Saiyeed
    Date: 2024-06-19 18:01:27
    File: 27. Remove Element.cpp
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
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<int> nums = {3, 2, 2, 3};
    cout << sol.removeElement(nums, 3) << nl;
    return 0;
}

// Problem : https://leetcode.com/problems/remove-element/
// Solution : https://leetcode.com/problems/remove-element/submissions/1293480327/