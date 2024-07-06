/*
    Author: Tajwar Saiyeed
    Date: 2024-07-06 21:06:19
    File: 2582. Pass the Pillow.cpp
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
    int passThePillow(int n, int time)
    {
        bool f = true;
        int pos = 1;
        while (time > 0)
        {
            if (f)
            {
                if (pos == n)
                {
                    f = false;
                    pos--;
                }
                else
                {
                    pos++;
                }
            }
            else
            {
                if (pos == 1)
                {
                    f = true;
                    pos++;
                }
                else
                {
                    pos--;
                }
            }
            time--;
        }

        return pos;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    int n, time;
    cin >> n >> time;
    cout << ob.passThePillow(n, time) << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/pass-the-pillow/