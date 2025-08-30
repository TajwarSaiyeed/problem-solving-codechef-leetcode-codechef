class Solution:
    def getLeastFrequentDigit(self, n: int) -> int:
        ns = str(n)
        ct = Counter(ns)
        mn = min(ct.values())
        keys_with_min_value = [key for key, value in ct.items() if value == mn]
        return int(min(keys_with_min_value))