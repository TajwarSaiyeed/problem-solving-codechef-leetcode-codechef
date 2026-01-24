from typing import List


class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()

        l, r = 0, len(nums) - 1
        ans = []
        while l < r:
            x, y = nums[l], nums[r]
            ans.append(x + y)
            l += 1
            r -= 1

        return max(ans)


# https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
