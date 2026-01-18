def main():
    n, m, h = map(int, input().split())
    arr = list(map(int, input().split()))

    dp = [0] * n
    trk = []

    for _ in range(m):
        b, c = map(int, input().split())
        b -= 1

        if arr[b] + dp[b] + c > h:
            for idx in trk:
                dp[idx] = 0
            trk = []
        else:
            dp[b] += c
            trk.append(b)

    ans = []
    ans.extend(str(arr[i] + dp[i]) for i in range(n))
    print(" ".join(ans))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2185/problem/D
