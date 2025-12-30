class Solution {
public:
    int lengthOfLastWord(string s) {
        string tmp = "";
        stringstream ss;
        ss << s;
        string word;
        while (ss >> word)
        {
            tmp = word;
        }
        return tmp.size();
    }
};