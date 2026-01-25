import sys
from typing import List


class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        n = len(nums)
        mn = sys.maxsize
        for i in range(n - k + 1):
            mn = min(mn, nums[i + k - 1] - nums[i])

        return mn


# https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
