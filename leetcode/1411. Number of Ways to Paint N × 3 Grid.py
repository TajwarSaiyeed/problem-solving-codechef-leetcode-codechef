from functools import lru_cache


class Solution:
    M = 10**9 + 7

    values = [
        "RYR",
        "YRY",
        "GRG",
        "GRY",
        "RYG",
        "YRG",
        "RGR",
        "YGR",
        "GYR",
        "RGY",
        "YGY",
        "GYG",
    ]

    @lru_cache(None)
    def answer(self, n, pre):
        if n == 0:
            return 1

        result = 0
        last = self.values[pre]

        for curr in range(12):
            if curr == pre:
                continue

            crp = self.values[curr]
            valid = True

            for col in range(3):
                if crp[col] == last[col]:
                    valid = False
                    break

            if valid:
                result = (result + self.answer(n - 1, curr)) % self.M

        return result

    def numOfWays(self, n: int) -> int:
        result = 0
        for i in range(12):
            result = (result + self.answer(n - 1, i)) % self.M
        return result


# https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid
