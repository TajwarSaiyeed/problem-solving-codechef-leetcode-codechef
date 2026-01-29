def main():
    n = int(input())
    s = input()

    if "1" not in s:
        print((n + 2) // 3)
        return

    seg = s.split("1")
    o = s.count("1")
    add = 0

    l, r = len(seg[0]), len(seg[-1])

    if l > 0:
        add += (l + 1) // 3

    if r > 0:
        add += (r + 1) // 3

    for i in seg[1:-1]:
        k = len(i)
        if k > 0:
            add += k // 3

    print(o + add)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()


# https://codeforces.com/contest/2188/problem/B
