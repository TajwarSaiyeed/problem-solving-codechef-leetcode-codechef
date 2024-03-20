
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = 0, minL = INT_MAX;

        int sum = 0;

        while (r < n)
        {
            sum += nums[r];

            while (sum >= target)
            {
                minL = min(minL, r - l + 1);
                sum -= nums[l];
                l++;
            }
            r++;
        }

        if (minL != INT_MAX)
        {
            return minL;
        }
        else
        {
            return 0;
        }
    }
};
// Submission: https://leetcode.com/problems/minimum-size-subarray-sum/submissions/1208685182/