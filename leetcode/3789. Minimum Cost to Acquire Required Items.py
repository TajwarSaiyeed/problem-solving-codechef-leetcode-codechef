class Solution:
    def minimumCost(self, cost1: int, cost2: int, costBoth: int, need1: int, need2: int) -> int:
        v1 = cost1 * need1 + cost2 * need2
        v2 = costBoth * max(need1, need2)
        v3 = costBoth * min(need1, need2) + (cost1 if need1 > need2 else cost2) * abs(need1 - need2)
        return min(v1, v2, v3)