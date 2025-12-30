#define ll long long
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        ll mx = *max_element(nums.begin(), nums.end());
        long long i = 1;
        for (i = 1; i<mx+1; i++)  {
            auto l = lower_bound(nums.begin(), nums.end(), i);
            if (*l != i) {
                break;
            }
        }
        return i;
    }
};