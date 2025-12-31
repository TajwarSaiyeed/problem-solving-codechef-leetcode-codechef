
#define vvs vector<vector<string>>
#define vs vector<string>
class Solution {
public:
    bool isPalindrome(string& s, int l, int r) {
        while (l <= r) {
            if (s[l++] != s[r--])
                return false;
        }

        return true;
    }

    void f(int idx, vvs& ans, vs& a, string& s, int n) {
        if (idx == n) {
            ans.push_back(a);
            return;
        }

        for (int i = idx; i < n; ++i) {
            if (isPalindrome(s, idx, i)) {
                a.push_back(s.substr(idx, i - idx + 1));
                f(i + 1, ans, a, s, n);
                a.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vvs ans;
        vs a;
        int n = s.size();
        f(0, ans, a, s, n);
        return ans;
    }
};