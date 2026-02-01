class Solution:
    def brokenCalc(self, n: int, m: int) -> int:
        ans = 0
        while m > n:
            if m % 2 == 0:
                m //= 2
            else:
                m += 1
            ans += 1
        ans += n - m
        return ans


# https://leetcode.com/problems/broken-calculator/
