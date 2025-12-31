class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        set<int> st;
        sort(nums.begin(), nums.end());
        for(int x : nums) {
            st.insert(x);
            mp[x]++;
        }

        for (auto it = st.begin(); it != st.end(); ++it) {
            if (mp[*it] == 1) {
                return *it;
            }
        }
        return 1;
    }
};