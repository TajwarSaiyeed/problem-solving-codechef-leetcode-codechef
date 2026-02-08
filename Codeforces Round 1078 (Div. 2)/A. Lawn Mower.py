def main():
    n, w = map(int, input().split())
    ans = n - (n // w)
    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2194/problem/A
