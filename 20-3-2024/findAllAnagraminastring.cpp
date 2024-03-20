#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(int alp[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (alp[i] != 0)
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> v;
        int ans = 0, pSize = p.size(), sSize = s.size();
        int l = 0, r = 0;
        int alp[26] = {0};
        for (char ch : p)
        {
            alp[ch - 'a']++;
        }
        while (r < sSize)
        {
            alp[s[r] - 'a']--;
            if (r - l + 1 == pSize)
            {
                if (isAnagram(alp))
                    v.push_back(l);
                alp[s[l] - 'a']++;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.findAnagrams(pat, txt);
        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// Submission: https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/1208673996/