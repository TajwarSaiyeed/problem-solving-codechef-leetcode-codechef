class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        ans = s[:k]
        ans = ans[::-1]
        n = len(s)
        ans += s[k:n]
        return ans


# https://leetcode.com/problems/reverse-string-prefix
