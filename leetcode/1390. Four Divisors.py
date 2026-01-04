import math
from typing import List


class Solution:
    def div(self, x):
        ans = set()
        for i in range(1, int(math.sqrt(x)) + 1):
            if x % i == 0:
                ans.add(i)
                ans.add(x // i)

        if len(ans) == 4:
            return sum(ans)
        return 0

    def sumFourDivisors(self, nums: List[int]) -> int:
        ans = 0
        for i in nums:
            ans += self.div(i)

        return ans
