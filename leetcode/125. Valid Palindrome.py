class Solution:
    def isPalindrome(self, s: str) -> bool:
        st = "".join(ch for ch in s if ch.isalnum()).lower()
        return st == st[::-1]
        