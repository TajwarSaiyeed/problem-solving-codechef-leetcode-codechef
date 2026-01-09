def main():
    n = int(input())
    a = list(map(int, input().split()))

    l, r = 0, n - 1
    s, d = True, False
    ss, ds = 0, 0
    while r > l:
        if s is True:
            if a[l] < a[r]:
                ss += a[r]
                r -= 1
            else:
                ss += a[l]
                l += 1
            s = False
            d = True
        if d is True:
            if a[l] < a[r]:
                ds += a[r]
                r -= 1
            else:
                ds += a[l]
                l += 1
            d = False
            s = True
    if n % 2 == 1:
        ss += a[l]
    print(ss, ds)


if __name__ == "__main__":
    main()


# https://codeforces.com/problemset/problem/381/A
