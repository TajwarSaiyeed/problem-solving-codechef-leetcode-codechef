from typing import List


class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        mx = max(letters)

        if mx <= target:
            return letters[0]
        else:
            for x in letters:
                if x > target:
                    return x
        return ""


# https://leetcode.com/problems/find-smallest-letter-greater-than-target/
