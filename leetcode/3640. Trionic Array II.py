from typing import List


class Solution:
    dp = {}

    def solve(self, i, t, nums, n):
        if i == n:
            if t == 3:
                return 0
            else:
                return -(10**18) // 2

        if (i, t) in self.dp:
            return self.dp[(i, t)]

        take = -(10**18) // 2
        skip = -(10**18) // 2

        if t == 0:
            skip = self.solve(i + 1, 0, nums, n)

        if t == 3:
            take = nums[i]

        if i + 1 < n:
            curr, nxt = nums[i], nums[i + 1]

            if t == 0 and nxt > curr:
                take = max(take, curr + self.solve(i + 1, 1, nums, n))
            elif t == 1:
                if nxt > curr:
                    take = max(take, curr + self.solve(i + 1, 1, nums, n))
                elif nxt < curr:
                    take = max(take, curr + self.solve(i + 1, 2, nums, n))
            elif t == 2:
                if nxt < curr:
                    take = max(take, curr + self.solve(i + 1, 2, nums, n))
                elif nxt > curr:
                    take = max(take, curr + self.solve(i + 1, 3, nums, n))
            elif t == 3 and nxt > curr:
                take = max(take, curr + self.solve(i + 1, 3, nums, n))

        self.dp[(i, t)] = max(take, skip)
        return self.dp[(i, t)]

    def maxSumTrionic(self, nums: List[int]) -> int:
        self.dp.clear()
        n = len(nums)
        return self.solve(0, 0, nums, n)


# https://leetcode.com/problems/trionic-array-ii/
