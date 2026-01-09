from bisect import bisect_right


def main():
    n = int(input())
    x = sorted(map(int, input().split()))
    dp = {x[i]: i + 1 for i in range(n)}
    q = int(input())

    keys = list(dp.keys())

    for _ in range(q):
        x = int(input())
        if x in dp:
            print(dp[x])
        else:
            idx = bisect_right(keys, x) - 1
            print(0 if idx < 0 else dp[keys[idx]])


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/706/problem/B
