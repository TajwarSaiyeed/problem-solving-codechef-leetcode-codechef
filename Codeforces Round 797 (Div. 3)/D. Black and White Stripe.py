def main():
    n, k = map(int, input().split())
    s = input()
    W = s[:k].count("W")
    ans = W
    l = k
    while l < n:
        if s[l] == "W":
            W += 1
        if s[l - k] == "W":
            W -= 1
        ans = min(ans, W)
        l += 1
    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()


# https://codeforces.com/contest/1690/problem/D
