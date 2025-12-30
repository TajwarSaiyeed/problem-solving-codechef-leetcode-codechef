class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        vector<int> merge;
        for (int i = 0; i < m; ++i)
            merge.push_back(nums1[i]);

        for (int i = 0; i < n; ++i)
            merge.push_back(nums2[i]);

        sort(merge.begin(), merge.end());
        double ans = 0;
        double mid = (m + n) / 2;
        // cout << mid << " " << merge.size() << '\n';
        if ((m + n) % 2 == 0) {
            ans = double(merge[mid-1] + merge[mid]) / 2;
            // cout << merge[mid-1] << " " << merge[mid] << '\n';
        } else {
            ans = double(merge[mid]);
            // cout<<merge[mid] << " " << merge[mid-1] << "\n";
        }
        return ans;
    }
};