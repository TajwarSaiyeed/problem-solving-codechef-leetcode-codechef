from typing import List


class Solution:
    def separateSquares(self, squares: List[List[int]]) -> float:
        lw, hi, t = float("inf"), float("-inf"), 0

        for x, y, l in squares:
            t += l * l
            lw = min(lw, y)
            hi = max(hi, y + l)

        ans = t / 2.0
        res = 0.0000
        while hi - lw > 10**-5:
            mid = lw + (hi - lw) / 2.0
            res = mid

            c = 0
            for _, y, l in squares:
                c_y = max(0, min(l, mid - y))
                c += l * c_y

            if c < ans:
                lw = mid
            else:
                hi = mid

        return res
