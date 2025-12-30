class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lr = lower_bound(nums.begin(), nums.end(), target);
        auto ur = upper_bound(nums.begin(), nums.end(), target);
        if (lr != nums.end() && *lr == target) return {(int)(lr - nums.begin()), (int)(ur - nums.begin()) - 1};
        return {-1, -1};
    }
};