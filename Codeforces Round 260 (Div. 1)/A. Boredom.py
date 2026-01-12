from typing import Counter


def main():
    n = int(input())
    l = list(map(int, input().split()))
    x = Counter(l)
    mx = max(x)

    dp = [0] * (mx + 1)
    dp[1] = x[1] * 1

    for i in range(2, mx + 1):
        dp[i] = max(dp[i - 1], dp[i - 2] + x[i] * i)

    print(dp[mx])


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/455/problem/A
