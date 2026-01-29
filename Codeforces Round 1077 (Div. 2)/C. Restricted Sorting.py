def main():
    n = int(input())
    arr = list(map(int, input().split()))

    srt = sorted(arr)
    if arr == srt:
        print(-1)
        return

    mn, mx = min(arr), max(arr)

    ans = None
    for i in range(n):
        if arr[i] != srt[i]:
            v = arr[i]
            x = max(mx - v, v - mn)
            if ans is None or x < ans:
                ans = x
    print(ans if ans is not None else -1)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2188/problem/C
