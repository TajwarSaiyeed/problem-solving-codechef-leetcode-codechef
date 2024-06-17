
class Solution
{
public:
    int longestPalindrome(string s)
    {
        int count = 0;
        map<char, int> mp;
        for (auto x : s)
        {
            mp[x]++;
        }
        int sum = 0;
        bool single = false;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 == 0)
            {
                sum += it->second;
            }
            else
            {
                single = true;
                sum += it->second - 1;
            }
        }

        return single ? sum + 1 : sum;
    }
};

// Problem : https://leetcode.com/problems/longest-palindrome/