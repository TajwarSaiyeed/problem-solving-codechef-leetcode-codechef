class Solution {
public:
    int hammingWeight(int n) {

        string b;
        while (n > 0) {
            b += (n % 2) + '0';
            n /= 2;
        }

        int cnt = count(b.begin(), b.end(), '1');

        return cnt;
    }
};