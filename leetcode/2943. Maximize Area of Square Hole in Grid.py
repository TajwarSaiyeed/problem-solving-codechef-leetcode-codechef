from typing import List


class Solution:
    def ll(self, values):
        s = set(values)
        longest = 0

        for num in s:
            if num - 1 not in s:
                curr = num
                length = 1

                while curr + 1 in s:
                    curr += 1
                    length += 1

                longest = max(longest, length)

        return longest

    def maximizeSquareHoleArea(
        self, n: int, m: int, hBars: List[int], vBars: List[int]
    ) -> int:
        x = self.ll(hBars)
        y = self.ll(vBars)

        res = min(x, y) + 1

        return res * res


# https://leetcode.com/problems/maximize-area-of-square-hole-in-grid/
