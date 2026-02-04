def main():
    a, b = map(int, input().split())

    x = max(a, 2 * b)
    y = max(2 * a, b)

    print(min(x, y) * min(x, y))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1360/A
