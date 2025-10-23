class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        x = k
        while True:
            if x not in nums:
                return x
            else :
                x += k
        return x

# https://leetcode.com/problems/smallest-missing-multiple-of-k/