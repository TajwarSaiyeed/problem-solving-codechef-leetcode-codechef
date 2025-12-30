class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40,
                           10, 9, 5, 4, 1};

        vector<string> rom = {"M", "CM", "D", "CD", "C", "XC", "L", "XL",
                              "X", "IX", "V", "IV", "I"};

        for (int i = 0; i < val.size(); i++)
        {
            // cout << num << " " << val[i] << nl;
            while (num >= val[i])
            {
                num -= val[i];
                res += rom[i];
            }
            // cout << "After: " << num << nl;
        }
        return res;
    }
};