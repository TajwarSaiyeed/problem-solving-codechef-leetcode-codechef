class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mx = -1;
        map<int, int> mp;
        for (auto x : nums) {
            mp[x]++;
            if (mp[x] > mp[mx]) mx = x;
        }
        return mx;
    }
};