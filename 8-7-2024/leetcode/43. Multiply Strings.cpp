/*
    Author: Tajwar Saiyeed
    Date: 2024-07-08 18:40:07
    File: 43. Multiply Strings.cpp
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
    string multiply(string num1, string num2)
    {
        if (num1 == "0" && num2 == "0")
            return "0";

        int n = num1.size();
        int m = num2.size();
        string result(n + m, '0');

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = m - 1; j >= 0; --j)
            {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + (result[i + j + 1] - '0');
                result[i + j + 1] = sum % 10 + '0';
                result[i + j] += sum / 10;
            }
        }

        for (int i = 0; i < result.size(); ++i)
        {
            if (result[i] != '0')
            {
                return result.substr(i);
            }
        }

        return "0";
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    string num1, num2;
    cin >> num1 >> num2;
    cout << ob.multiply(num1, num2) << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/multiply-strings/