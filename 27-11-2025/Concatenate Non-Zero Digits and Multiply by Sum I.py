class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x = str(n)
        x = "".join([ch for ch in x if ch != "0"])
        if not x:
            return 0
        s = sum([int(ch) for ch in x])
        return int(int(x) * s)
