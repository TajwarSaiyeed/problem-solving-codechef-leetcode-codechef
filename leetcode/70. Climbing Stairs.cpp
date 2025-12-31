class Solution {
public:
    int climbStairs(int n) {
        int f = 1;
        int s = 1;

        for (int i = 1; i < n; i++) {
            int nx = f + s;
            f = s;
            s = nx;
        }

        return s;
    }
};