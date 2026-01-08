from typing import List


class Solution:
    def solve(self, nums1: List[int], nums2: List[int], i, j, m, n) -> int:
        if i == m or j == n:
            return -(10**9)

        if (i, j) in self.dp:
            return self.dp[(i, j)]

        ans = nums1[i] * nums2[j]
        ans_i_j = nums1[i] * nums2[j] + self.solve(nums1, nums2, i + 1, j + 1, m, n)
        ans_i = self.solve(nums1, nums2, i, j + 1, m, n)
        ans_j = self.solve(nums1, nums2, i + 1, j, m, n)
        result = max(ans, ans_i_j, ans_i, ans_j)
        self.dp[(i, j)] = result
        return result

    def maxDotProduct(self, nums1: List[int], nums2: List[int]) -> int:
        m, n = len(nums1), len(nums2)
        self.dp = {}
        return self.solve(nums1, nums2, 0, 0, m, n)


# https://leetcode.com/problems/max-dot-product-of-two-subsequences/
