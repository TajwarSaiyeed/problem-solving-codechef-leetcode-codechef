import math
from typing import List


class Solution:
    def div(self, x):
        ans = set()
        for i in range(1, int(math.sqrt(x)) + 1):
            if x % i == 0:
                ans.add(i)
                ans.add(x // i)

        return sum(ans) if len(ans) == 4 else 0

    def sumFourDivisors(self, nums: List[int]) -> int:
        return sum(self.div(i) for i in nums)
