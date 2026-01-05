def main():
    n, x = map(int, input().split())

    cnt = 0

    for i in range(1, min(n, x) + 1):
        if x % i == 0:
            j = x // i
            if j <= n:
                cnt += 1

    print(cnt)


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/577/A
