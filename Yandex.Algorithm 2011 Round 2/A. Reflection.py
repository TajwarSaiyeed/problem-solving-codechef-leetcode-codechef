def ref(n) -> int:
    s = str(n)
    t = "".join(str(9 - int(c)) for c in s)
    return int(t)


def main():
    l, r = map(int, input().split())
    # 0 1 2 3 4 5 6 7 8 9
    # 9 8 7 6 5 4 3 2 1 0
    ans = 0
    for i in range(1, 11):
        b = 10**i

        for x in range(b - 20, b + 1):
            if l <= x <= r:
                ans = max(ans, x * ref(x))

        mid = (b - 1) // 2
        for x in range(mid - 20, mid + 21):
            if l <= x <= r:
                ans = max(ans, x * ref(x))

    ans = max(ans, l * ref(l))
    ans = max(ans, r * ref(r))

    print(ans)


if __name__ == "__main__":
    main()


# https://codeforces.com/contest/86/problem/A
