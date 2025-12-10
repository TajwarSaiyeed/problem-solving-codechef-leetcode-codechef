class Solution:
    def smallestRepunitDivByK(self, k: int) -> int:
        if k == 1: return 1
        num = 0

        for i in range(1, k+1):
            num = ((num * 10) + 1) % k
            if num == 0: 
                return i


        return -1
    
    
# Problem : https://leetcode.com/problems/smallest-integer-divisible-by-k/
# https://leetcode.com/problems/smallest-integer-divisible-by-k/submissions/1851079135