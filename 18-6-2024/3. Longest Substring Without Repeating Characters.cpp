/*
    Author: Tajwar Saiyeed
    Date: 2024-06-18 12:27:26
    File: 3. Longest Substring Without Repeating Characters.cpp
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
    int lengthOfLongestSubstring(string s)
    {
        int cnt = 0;
        set<char> st;
        int l = 0, r = 0;
        while (r < s.size())
        {
            if (st.find(s[r]) == st.end())
            {
                st.insert(s[r]);
                cnt = max(cnt, (r - l + 1));
                r++;
            }
            else
            {
                st.erase(s[l]);
                l++;
            }
        }

        return cnt;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    string s;
    cin >> s;
    cout << sol.lengthOfLongestSubstring(s) << nl;
    return 0;
}

// Problem : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Solution : https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1292079514/