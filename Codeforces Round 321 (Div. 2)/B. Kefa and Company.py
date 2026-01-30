def main():
    n, d = map(int, input().split())
    arr = []
    for _ in range(n):
        x, y = map(int, input().split())
        arr.append((x, y))

    arr.sort()

    l = 0
    c_sum = 0
    mx = 0

    for r in range(n):
        m, f = arr[r]
        c_sum += f

        while m - arr[l][0] >= d:
            c_sum -= arr[l][1]
            l += 1

        mx = max(mx, c_sum)

    print(mx)


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/580/problem/B
