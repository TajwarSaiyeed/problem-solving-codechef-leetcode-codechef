def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    ans = 0
    for x in arr:
        if x + k <= 5:
            ans += 1

    print(ans // 3)


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/432/problem/A
