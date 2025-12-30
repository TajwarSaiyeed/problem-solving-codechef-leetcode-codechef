class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, left = 0, right = height.size() - 1;
        while(left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            maxWater = max(w * h, maxWater);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};