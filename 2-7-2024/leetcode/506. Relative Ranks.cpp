/*
    Author: Tajwar Saiyeed
    Date: 2024-07-02 22:38:36
    File: 506. Relative Ranks.cpp
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
    vector<string> findRelativeRanks(vector<int> &score)
    {
        if (score.size() == 1)
        {
            return {"Gold Medal"};
        }
        vector<int> cp = score;
        sort(cp.rbegin(), cp.rend());
        map<int, string> mp;
        vector<string> result;

        if (score.size() >= 3)
        {
            mp[cp[0]] = "Gold Medal";
            mp[cp[1]] = "Silver Medal";
            mp[cp[2]] = "Bronze Medal";
        }
        else if (score.size() >= 2)
        {
            mp[cp[0]] = "Gold Medal";
            mp[cp[1]] = "Silver Medal";
        }

        if (score.size() > 3)
        {
            for (int i = 3; i < cp.size(); i++)
            {
                mp[cp[i]] = to_string(i + 1);
            }
        }

        for (auto x : score)
        {
            result.push_back(mp[x]);
        }

        return result;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> result = obj.findRelativeRanks(score);
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}

// Problem : https://leetcode.com/problems/relative-ranks/