from typing import List


class Solution:
    def longestBalanced(self, nums: List[int]) -> int:
        result = 0

        n = len(nums)

        for i in range(n):
            odd = set()
            even = set()

            for j in range(i, n):
                if nums[j] % 2 == 0:
                    even.add(nums[j])
                else:
                    odd.add(nums[j])

                if len(odd) == len(even):
                    result = max(result, j - i + 1)

        return result


# https://leetcode.com/problems/longest-balanced-subarray-i/
