#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sol1(string s)
    {
        int x = 0, len = s.size() - 1;

        int mx = INT_MIN;

        for (int i = 0; i < len; i++)
        {
            string left = s.substr(0, i + 1);
            string right = s.substr(i + 1);
            int z = 0, o = 0;
            for (auto y : left)
            {
                if (y == '0')
                    z++;
            }
            for (auto y : right)
            {
                if (y == '1')
                    o++;
            }
            mx = max(mx, z + o);
        }

        return mx;
    };

    int sol2(string s)
    {
        int n = s.size();
        vector<int> pzero(n, 0);
        pzero[0] = s[0] == '0' ? 1 : 0;
        int tOne = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (s[i] == '1')
                    tOne++;
            }
            else if (i > 0)
            {
                pzero[i] = pzero[i - 1] + (s[i] == '0' ? 1 : 0);
                if (s[i] == '1')
                    tOne++;
            }
        }

        int mx = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int lZero = pzero[i];
            int rOne = tOne - (i + 1 - lZero);
            mx = max(mx, lZero + rOne);
        }
        return mx;
    }
};


int main()
{
    Solution s;
    string str = "011101";
    cout << s.sol1(str) << endl;
    cout << s.sol2(str) << endl;
    return 0;
}

// Problem : https://leetcode.com/problems/maximum-score-after-splitting-a-string/