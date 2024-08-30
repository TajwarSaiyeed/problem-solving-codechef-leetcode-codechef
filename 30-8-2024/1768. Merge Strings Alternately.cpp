/*
    Author: Tajwar Saiyeed
    Date: 2024-08-30 19:12:42
    File: 1768. Merge Strings Alternately.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int w1 = word1.size(), w2 = word2.size();
        if (w1 == w2)
        {
            for (int i = 0; i < w1; i++)
            {
                ans += word1[i];
                ans += word2[i];
            }
        }
        else
        {
            for (int i = 0; i < min(w1, w2); i++)
            {
                ans += word1[i];
                ans += word2[i];
            }
            ans += (w1 > w2) ? word1.substr(w2, w1) : word2.substr(w1, w2);
        }

        return ans;
    }
};

void solve()
{
    string word1, word2;
    cin >> word1 >> word2;
    Solution sol;
    cout << sol.mergeAlternately(word1, word2) << endl;
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