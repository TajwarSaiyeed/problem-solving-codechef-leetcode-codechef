from itertools import combinations
from typing import List


class Solution:
    def maximizeSquareArea(
        self, m: int, n: int, hFences: List[int], vFences: List[int]
    ) -> int:
        M = 10**9 + 7
        h = sorted(hFences + [1, m])
        v = sorted(vFences + [1, n])

        dh = {y - x for x, y in combinations(h, 2)}
        dv = {y - x for x, y in combinations(v, 2)}

        c = dh.intersection(dv)
        ans = -1
        if c:
            ans = max(c)

        return (ans * ans) % M if ans != -1 else -1


# https://leetcode.com/problems/maximum-square-area-by-removing-fences-from-a-field
