/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 18:42:50
    File: 349. Intersection of Two Arrays.cpp
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
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> mp;
        set<int> st;
        for (auto x : nums1)
            st.insert(x);
        for (auto x : st)
            mp[x]++;
        st.clear();
        for (auto x : nums2)
            st.insert(x);
        for (auto x : st)
            mp[x]++;
        vector<int> v;
        for (auto m : mp)
        {
            if (m.second == 2)
            {
                v.push_back(m.first);
            }
        }

        return v;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> nums1(n), nums2(m);
        fr(i, 0, n) cin >> nums1[i];
        fr(i, 0, m) cin >> nums2[i];
        Solution ob;
        vector<int> ans = ob.intersection(nums1, nums2);
        for (auto x : ans)
            cout << x << " ";
        cout << nl;
    }

    return 0;
}

// Problem : https://leetcode.com/problems/intersection-of-two-arrays/