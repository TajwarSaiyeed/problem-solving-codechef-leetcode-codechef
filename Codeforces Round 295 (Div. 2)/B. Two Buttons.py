def main():
    n, m = map(int, input().split())

    # if n > m:
    #     print(n - m)
    #     return
    # else:
    #     x = m // 2
    #     print(n - x + 1)

    ans = 0
    while m > n:
        if m % 2 == 0:
            m //= 2
        else:
            m += 1
        ans += 1
    ans += n - m
    print(ans)


if __name__ == "__main__":
    main()


# https://codeforces.com/contest/520/problem/B
