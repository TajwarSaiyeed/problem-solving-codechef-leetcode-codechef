/*
    Author: Tajwar Saiyeed
    Date: 2024-06-25 18:43:30
    File: 7. Reverse Integer.cpp
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
    int reverse(int x)
    {
        long long rev = 0;
        while (x)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN)
            return 0;
        return rev;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    Solution s;
    cout << s.reverse(x) << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/reverse-integer
// Submission : https://leetcode.com/problems/reverse-integer/submissions/1299824000/