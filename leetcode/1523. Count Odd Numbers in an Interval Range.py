class Solution:
    def countOdds(self, low: int, high: int) -> int:
        return (high + 1) // 2 - (low // 2)


# Problem : https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
# https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/1852012186