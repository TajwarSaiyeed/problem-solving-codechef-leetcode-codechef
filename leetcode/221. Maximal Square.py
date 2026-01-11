from typing import List


class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        cols = len(matrix[0])
        rows = len(matrix)

        if rows == 0 or cols == 0:
            return 0

        dp = [[0] * cols for _ in range(rows)]

        ans = 0
        for r in range(rows):
            for c in range(cols):
                if matrix[r][c] == "1":
                    dp[r][c] = 1
                    if r > 0 and c > 0:
                        dp[r][c] += min([dp[r][c - 1], dp[r - 1][c], dp[r - 1][c - 1]])
                    ans = max(ans, dp[r][c])

        return ans * ans


# https://leetcode.com/problems/maximal-square/
