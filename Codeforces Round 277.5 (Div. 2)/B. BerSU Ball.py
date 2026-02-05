def main():
    n = int(input())
    b = sorted(list(map(int, input().split())))
    m = int(input())
    g = sorted(list(map(int, input().split())))

    ans = 0
    i, j = 0, 0
    while i < n and j < m:
        if abs(b[i] - g[j]) <= 1:
            i += 1
            j += 1
            ans += 1
        elif b[i] < g[j]:
            i += 1
        else:
            j += 1

    print(ans)


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/489/B
