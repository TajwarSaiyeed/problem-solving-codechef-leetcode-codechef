def mxl(s, k, t) -> int:
    l = 0
    ch = 0
    mx = 0
    for r in range(len(s)):
        if s[r] != t:
            ch += 1

        while ch > k:
            if s[l] != t:
                ch -= 1
            l += 1

        mx = max(mx, r - l + 1)
    return mx


def main():
    n, k = map(int, input().split())
    s = input()

    ch_a = mxl(s, k, "a")
    ch_b = mxl(s, k, "b")
    print(max(ch_a, ch_b))


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/676/C
