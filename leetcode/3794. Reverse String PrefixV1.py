class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        ans = ""
        for i in range(k - 1, len(s), k):
            step = k
            while step > 0:
                ans += s[i]
                step -= 1
                i -= 1
            break
        n = len(s)
        ans += s[k:n]
        return ans


# https://leetcode.com/problems/reverse-string-prefix
