def main():
    n, m = map(int, input().split())
    d = {}
    for _ in range(m):
        x, y = map(str, input().split())
        if len(x) == len(y) or len(x) < len(y):
            d[x] = x
            d[y] = x
        elif len(x) > len(y):
            d[y] = y
            d[x] = y

    final_in = list(map(str, input().split()))

    for x in final_in:
        print(d[x], end=" ")


if __name__ == "__main__":
    main()

# Problem : https://codeforces.com/contest/499/problem/B
