/*
    Author: Tajwar Saiyeed
    Date: 2024-07-10 18:48:52
    File: 1701. Average Waiting Time.cpp
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
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double total_waiting_time = 0, current_time = 1;
        for (auto &customer : customers)
        {
            double x = customer[0], y = customer[1];
            if (current_time < x)
            {
                current_time = x;
            }
            else if (current_time > x)
            {
                total_waiting_time += (current_time - x);
            }
            total_waiting_time += y;
            current_time += y;
        }
        int sz = customers.size();
        double avg = total_waiting_time / sz;
        return avg;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution ob;
    vector<vector<int>> customers = {{1, 2}, {2, 5}, {4, 3}};
    cout << ob.averageWaitingTime(customers) << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/average-waiting-time/