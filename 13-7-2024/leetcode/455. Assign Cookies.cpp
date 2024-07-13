/*
    Author: Tajwar Saiyeed
    Date: 2024-07-13 13:55:39
    File: 455. Assign Cookies.cpp
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
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        stack<int> sg, ss;
        for (int x : g)
        {
            sg.push(x);
        }
        for (int x : s)
        {
            ss.push(x);
        }
        int cnt = 0;
        while (!sg.empty() && !ss.empty())
        {
            int x = sg.top(), y = ss.top();
            if (x > y)
            {
                sg.pop();
                continue;
            }
            sg.pop();
            ss.pop();
            cnt++;
        }
        return cnt;
    }
};

void solve()
{
    Solution s1;
    vector<int> g = {1, 2, 3}, s = {1, 1};
    cout << s1.findContentChildren(g, s) << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}

// Problem : https://leetcode.com/problems/assign-cookies/