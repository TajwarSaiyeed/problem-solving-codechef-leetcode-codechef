from typing import List


class Solution:
    def minimumCost(self, nums: List[int]) -> int:
        ans = nums[0]
        nums = nums[1:]
        nums.sort()
        return ans + nums[0] + nums[1]


# https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i
