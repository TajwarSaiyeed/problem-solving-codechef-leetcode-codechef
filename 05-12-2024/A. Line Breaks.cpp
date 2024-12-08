/*
    Author: Tajwar Saiyeed
    Date: 2024-12-06 21:23:57
    File: A. Line Breaks.cpp
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        int total = 0, cnt = 0;
        for (auto x : s)
        {
            if (total + x.size() <= m)
            {
                total += x.size();
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << cnt << '\n';
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    Solution sol;

    while (tc--)
        sol.solve();

    return 0;
}