from typing import List


class Solution:
    def isTrionic(self, nums: List[int]) -> bool:
        i = 1
        n = len(nums)
        while i < n and nums[i - 1] < nums[i]:
            i += 1
        p = i - 1

        while i < n and nums[i - 1] > nums[i]:
            i += 1
        q = i - 1

        while i < n and nums[i - 1] < nums[i]:
            i += 1
        qn = i - 1

        return (p != 0) and (q != p) and (qn == n - 1 and qn != q)


# https://leetcode.com/problems/trionic-array-i
