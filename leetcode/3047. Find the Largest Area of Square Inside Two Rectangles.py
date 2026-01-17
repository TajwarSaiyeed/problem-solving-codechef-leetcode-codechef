from typing import List


class Solution:
    def largestSquareArea(
        self, bottomLeft: List[List[int]], topRight: List[List[int]]
    ) -> int:
        n = len(bottomLeft)

        ans = 0

        for i in range(n):
            for j in range(i + 1, n):
                topX = min(topRight[i][0], topRight[j][0])
                bottomX = max(bottomLeft[i][0], bottomLeft[j][0])

                w = topX - bottomX

                topY = min(topRight[i][1], topRight[j][1])
                bottomY = max(bottomLeft[i][1], bottomLeft[j][1])

                h = topY - bottomY

                side = min(w, h)

                ans = max(ans, side)

        return ans * ans


# https://leetcode.com/problems/find-the-largest-area-of-square-inside-two-rectangles/
