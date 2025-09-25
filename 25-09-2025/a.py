def main():
    n = int(input())
    a = list(map(int, input().split()))
    z = a.count(0)
    mO = a.count(-1)
    ans = z
    if mO % 2 == 1:
        ans += 2
    print(ans)


if __name__ == "__main__":
    tc = int(input())
    for _ in range(tc):
        main()


# https://codeforces.com/contest/2149/problem/A