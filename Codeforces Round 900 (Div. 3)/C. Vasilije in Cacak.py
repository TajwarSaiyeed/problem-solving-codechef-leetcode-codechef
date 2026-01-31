def main():
    n, k, x = map(int, input().split())
    l = (k * (k + 1)) / 2
    r = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2

    if x >= l and x <= r:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/1878/problem/C
