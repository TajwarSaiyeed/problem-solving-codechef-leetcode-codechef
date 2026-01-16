def main():
    n, t = map(int, input().split())
    a = list(map(int, input().split()))

    l = 0
    c = 0
    ans = 0

    for r in range(n):
        c += a[r]

        while c > t:
            c -= a[l]
            l += 1

        ans = max(ans, r - l + 1)

    print(ans)


if __name__ == "__main__":
    main()
