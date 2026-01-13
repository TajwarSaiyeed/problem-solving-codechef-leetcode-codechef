def main():
    n = int(input())
    a = list(map(int, input().split()))

    o, t, th = a.count(1), a.count(2), a.count(3)

    if o < 1 or t < 1 or th < 1:
        print(0)
        return
    w = min(o, t, th)
    print(w)
    for _ in range(w):
        io = a.index(1)
        print(io + 1, end=" ")
        a[io] = -1
        itw = a.index(2)
        print(itw + 1, end=" ")
        a[itw] = -1
        ith = a.index(3)
        print(ith + 1)
        a[ith] = -1


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/490/problem/A
