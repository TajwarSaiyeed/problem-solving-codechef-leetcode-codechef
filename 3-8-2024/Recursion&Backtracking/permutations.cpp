/*
    Author: Tajwar Saiyeed
    Date: 2024-08-03 07:18:22
    File: permutations.cpp
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

vector<vector<int>> ans;
int n;

void permutation(vi &nums, vi &a, vi &frq)
{
    if (a.size() == n)
    {
        ans.push_back(a);
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (!frq[i])
        {
            a.push_back(nums[i]);
            frq[i] = 1;
            permutation(nums, a, frq);
            frq[i] = 0;
            a.pop_back();
        }
    }
}

void solve()
{
    cin >> n;
    vector<int> nums(n);
    fr(i, 0, n) cin >> nums[i];

    vector<int> a, frq(n, 0);

    permutation(nums, a, frq);

    for (auto an : ans)
    {
        for (int i = 0; i < an.size(); ++i)
        {
            cout << an[i] << ' ';
        }
        cout << "\n";
    }
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

// Problem :