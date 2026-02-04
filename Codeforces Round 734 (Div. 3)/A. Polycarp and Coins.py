def main():
    n = int(input())
    x = n // 3

    res = x + 2 * x
    if res == n:
        print(x, x)
        return
    res = (x + 1) + 2 * x
    if res == n:
        print(x + 1, x)
        return
    print(x, x + 1)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1551/A
