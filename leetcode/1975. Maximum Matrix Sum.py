from typing import List


class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        n = len(matrix[0])
        s = 0
        cnt = 0
        mn = 10**9
        for i in range(n):
            for j in range(n):
                x = matrix[i][j]
                mn = min(mn, abs(x))
                s += abs(x)
                if x < 0:
                    cnt += 1

        if cnt % 2 == 0:
            return s
        else:
            return s - 2 * mn


# https://leetcode.com/problems/maximum-matrix-sum/
