/*
    Author: Tajwar Saiyeed
    Date: 2024-06-26 23:07:31
    File: 58. Length of Last Word.cpp
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
    int lengthOfLastWord(string s)
    {
        string tmp = "";
        stringstream ss;
        ss << s;
        string word;
        while (ss >> word)
        {
            tmp = word;
        }
        return tmp.size();
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sl;
    cout << sl.lengthOfLastWord("Hello World") << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/length-of-last-word/