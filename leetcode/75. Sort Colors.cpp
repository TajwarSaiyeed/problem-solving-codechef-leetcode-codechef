class Solution {
public:
    void sortColors(vector<int>& nums) {
        multiset<int> mlt;
        for (int x : nums) {
            mlt.insert(x);
        }
        nums.clear();
        for (auto it : mlt) {
            nums.push_back(it);
        }
    }
};