def main():
    n = int(input())
    s = input()
    # d = n // 2
    # a, b = set(s[:d]), set(s[d:])
    # print(len(a) + len(b))

    # pre, suf = [], []

    # for i in range(1, n):
    #     a, b = set(s[0:i]), set(s[i:n])
    #     pre.append(len(a))
    #     suf.append(len(b))

    # ans = -1
    # for i in range(n - 1):
    #     ans = max(pre[i] + suf[i], ans)

    seen = set()
    pre, suf = [0] * n, [0] * n
    for i in range(n):
        seen.add(s[i])
        pre[i] = len(seen)

    seen.clear()

    for i in range(n - 1, -1, -1):
        seen.add(s[i])
        suf[i] = len(seen)

    ans = 0
    for i in range(1, n):
        ans = max(ans, pre[i - 1] + suf[i])

    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()


# https://codeforces.com/contest/1791/problem/D
