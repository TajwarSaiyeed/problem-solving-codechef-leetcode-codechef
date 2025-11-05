class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        mn, mx = min(nums), max(nums)
        ans = []
        for i in range(mn, mx+1):
            if i not in nums:
                ans.append(i)
        return ans