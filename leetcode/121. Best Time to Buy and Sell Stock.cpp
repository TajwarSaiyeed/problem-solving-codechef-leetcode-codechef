class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int p = 0;
        int l = 0, r = 1;
        while (r < n) {
            if (prices[l] < prices[r]) {
                p = max(p, prices[r] - prices[l]);
            } else {
                l = r;
            }
            r++;
        }

        return p;
    }
};