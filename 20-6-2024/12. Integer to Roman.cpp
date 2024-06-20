/*
    Author: Tajwar Saiyeed
    Date: 2024-06-20 17:44:05
    File: 12. Integer to Roman.cpp
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
    string intToRoman(int num)
    {
        string res = "";
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40,
                           10, 9, 5, 4, 1};

        vector<string> rom = {"M", "CM", "D", "CD", "C", "XC", "L", "XL",
                              "X", "IX", "V", "IV", "I"};

        for (int i = 0; i < val.size(); i++)
        {
            // cout << num << " " << val[i] << nl;
            while (num >= val[i])
            {
                num -= val[i];
                res += rom[i];
            }
            // cout << "After: " << num << nl;
        }
        return res;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    Solution s;
    cout << s.intToRoman(n) << nl;

    return 0;
}