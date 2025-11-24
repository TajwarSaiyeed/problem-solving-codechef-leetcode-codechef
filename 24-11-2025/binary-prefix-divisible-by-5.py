from typing import List, cast

class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        b_s = "".join(str(x) for x in nums)
        
        for i in range(len(b_s)):
            i_n = int(b_s[0:i+1], 2)
            if i_n % 5 == 0:
                nums[i] = True
            else:
                nums[i] = False

        return cast(List[bool], nums)


solution = Solution()
print(solution.prefixesDivBy5([0,1,1])) 
print(solution.prefixesDivBy5([1,1,1])) 
print(solution.prefixesDivBy5([0,1,1,1,1,1])) 
print(solution.prefixesDivBy5([1,1,1,0,1])) 

# https://leetcode.com/problems/binary-prefix-divisible-by-5/