class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        auto l = lower_bound(nums.begin(), nums.end(), target);
        return (int)(l - nums.begin());
    }
};