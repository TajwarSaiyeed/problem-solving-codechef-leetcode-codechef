class Solution:
    def minimumDeleteSum(self, s1: str, s2: str) -> int:
        n, m = len(s1), len(s2)

        dp = [[0] * (m + 1) for _ in range(n + 1)]

        for i in range(n):
            for j in range(m):
                if s1[i] == s2[j]:
                    dp[i + 1][j + 1] = dp[i][j] + ord(s1[i])
                else:
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j])

        total = sum(map(ord, s1)) + sum(map(ord, s2))
        return total - 2 * dp[n][m]


# https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/
# https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/solutions/7482163/frequency-counting-to-lcs-by-tajwarsaiye-g1um/
