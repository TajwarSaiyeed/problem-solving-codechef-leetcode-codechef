from typing import List

class Solution:
    def sortByReflection(self, nums: List[int]) -> List[int]:
        ans = []
        for num in nums:
            x = int(bin(num)[2:][::-1], 2)
            ans.append([num, x])

        ans = [x[0] for x in sorted(sorted(list(ans), key=lambda x: x[0]), key=lambda x: x[1])]

        return ans
    
    
# SUB: https://leetcode.com/submissions/detail/1849208605/
# Problem : https://leetcode.com/problems/sort-integers-by-binary-reflection/