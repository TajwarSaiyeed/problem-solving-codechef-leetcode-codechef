/*
    Author: Tajwar Saiyeed
    Date: 2024-06-22 23:21:19
    File: 28. Find the Index of the First Occurrence in a String.cpp
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
    int strStr(string haystack, string needle)
    {
        int index = -1;
        int needleSize = needle.size();
        for (int i = 0; i < haystack.size(); i++)
        {
            string s = haystack.substr(i, needleSize);
            if (s == needle)
            {
                return i;
            }
        }
        return index;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution *obj = new Solution();
    string haystack = "hello", needle = "ll";
    cout << obj->strStr(haystack, needle) << nl;
    return 0;
}

// Problem : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Submission : https://leetcode.com/submissions/detail/1296905053/