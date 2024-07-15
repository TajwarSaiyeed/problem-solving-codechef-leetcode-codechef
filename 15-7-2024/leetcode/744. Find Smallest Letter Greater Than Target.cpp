/*
    Author: Tajwar Saiyeed
    Date: 2024-07-15 22:56:10
    File: 744. Find Smallest Letter Greater Than Target.cpp
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
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char mx = *max_element(letters.begin(), letters.end());
        char ans = 'a';
        if (mx <= target)
        {
            ans = letters[0];
        }
        else
        {
            for (char x : letters)
            {
                if (x > target)
                {
                    ans = x;
                    break;
                }
            }
        }

        return ans;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<char> letters(n);
    fr(i, 0, n) cin >> letters[i];
    char target;
    cin >> target;

    Solution s;
    cout << s.nextGreatestLetter(letters, target) << nl;
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

// Problem : https://leetcode.com/problems/find-smallest-letter-greater-than-target/