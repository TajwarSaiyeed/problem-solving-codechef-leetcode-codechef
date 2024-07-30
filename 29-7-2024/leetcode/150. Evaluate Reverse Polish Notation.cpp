/*
    Author: Tajwar Saiyeed
    Date: 2024-07-29 18:23:09
    File: 150. Evaluate Reverse Polish Notation.cpp
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
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto token : tokens)
        {
            if (token == "+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a + b);
            }
            else if (token == "-")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b - a);
            }
            else if (token == "*")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a * b);
            }
            else if (token == "/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b / a);
            }
            else
            {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};

void solve()
{
    Solution s1;
    vector<string> v = {"2", "1", "+", "3", "*"};
    cout << s1.evalRPN(v) << nl;
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

// Problem : https://leetcode.com/problems/evaluate-reverse-polish-notation