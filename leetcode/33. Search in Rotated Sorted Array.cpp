class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
        for (int i = 0; i< nums.size(); i++) {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());

        int index = -1;
        int left = 0, right = nums.size() - 1, mid = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (v[mid].first == target)  {
                index = v[mid].second;
                break;
            }

            if (v[mid].first < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return index;
    }

};