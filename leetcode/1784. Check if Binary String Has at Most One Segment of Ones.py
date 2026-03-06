class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        seen_zero = False

        for c in s:
            if c == "0":
                seen_zero = True
            elif seen_zero:
                return False

        return True


# https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones
