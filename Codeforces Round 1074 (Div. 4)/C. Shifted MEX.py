def main():
    n = int(input())
    arr = list(map(int, input().split()))

    if n == 0:
        print(0)
        return

    st = sorted(list(set(arr)))

    if not st:
        print(0)
        return

    mx, c = 1, 1

    for i in range(1, len(st)):
        if st[i] == st[i - 1] + 1:
            c += 1
        else:
            if c > mx:
                mx = c
            c = 1

    if c > mx:
        mx = c

    print(mx)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2185/problem/C
