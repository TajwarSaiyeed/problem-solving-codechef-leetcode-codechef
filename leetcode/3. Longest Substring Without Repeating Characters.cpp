class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int cnt = 0;
       set<char>st;
       int l = 0, r = 0;
       while(r < s.size()) {
            if (st.find(s[r]) == st.end()) {   
                st.insert(s[r]);
                cnt = max(cnt, (r - l + 1));
                r++;
            } else {
                st.erase(s[l]);
                l++;
            }
       }

       return cnt;
    }
};