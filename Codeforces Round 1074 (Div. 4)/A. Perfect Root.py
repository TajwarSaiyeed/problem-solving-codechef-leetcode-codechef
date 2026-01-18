def main():
    n = int(input())
    ans = range(1, n + 1)
    print(" ".join(map(str, ans)))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2185/problem/A
