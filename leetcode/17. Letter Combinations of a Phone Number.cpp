class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int len = digits.length();
        int digit = digits.length() ? stoi(digits) : 0;
        vector<string> v = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> res;
        if (len == 0) {
            return res;
        } else if (len == 1) {
            for (int i = 0; i < v[digit].size(); i++) {
                    res.push_back({v[digit][i]});
            }
            return res;
        } 
        else if (len == 2){
            int d2 = digit % 10;
            digit /= 10;
            int d1 = digit % 10;
            for (int i = 0; i < v[d1].size(); i++) {
                for (int j = 0; j < v[d2].size(); j++) {
                    res.push_back({v[d1][i], v[d2][j]});
                }
            }
            return res;
        } else if (len == 3) {
            int d3 = digit % 10;
            digit/=10;
            int d2 = digit % 10;
            digit/=10;
            int d1 = digit % 10;
            for (int i = 0; i < v[d1].size(); i++) {
                for (int j = 0; j < v[d2].size(); j++) {
                    for (int k = 0; k < v[d3].size(); k++) {
                        res.push_back({v[d1][i], v[d2][j], v[d3][k]});
                    }
                }
            }
            return res;
        } else {
            int d4 = digit % 10;
            digit/=10;
            int d3 = digit % 10;
            digit/=10;
            int d2 = digit % 10;
            digit/=10;
            int d1 = digit % 10;
            for (int i = 0; i < v[d1].size(); i++) {
                for (int j = 0; j < v[d2].size(); j++) {
                    for (int k = 0; k < v[d3].size(); k++) {
                        for (int l = 0; l < v[d4].size(); l++) {
                            res.push_back({v[d1][i], v[d2][j], v[d3][k], v[d4][l]});
                        }
                    }
                }
            }
            return res;
        }
    }
};