def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    arr.sort()
    mx = 0
    c = 0
    for i in range(1, n):
        c += 1
        if arr[i] - arr[i - 1] <= k:
            mx = max(mx, c)
        else:
            c = 0

    print(n - mx - 1)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/1850/problem/D
