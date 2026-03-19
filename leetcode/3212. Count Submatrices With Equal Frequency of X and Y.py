from itertools import accumulate
from typing import List


class Solution:
    def numberOfSubmatrices(self, grid: List[List[str]]) -> int:
        p = (accumulate(map({"X": 1, "Y": 1j, ".": 0}.get, r)) for r in grid)
        return sum(0 < q.real == q.imag for c in zip(*p) for q in accumulate(c))


# https://leetcode.com/problems/count-submatrices-with-equal-frequency-of-x-and-y
