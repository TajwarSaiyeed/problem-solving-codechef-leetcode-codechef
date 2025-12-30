class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        int needleSize = needle.size();
        for (int i = 0; i < haystack.size(); i++) {
            string s = haystack.substr(i, needleSize);
            if (s == needle) {
               return i;
            }
        }
        return index;
    }
};