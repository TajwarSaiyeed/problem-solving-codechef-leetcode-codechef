def main():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    mx = 0
    for i in range(0, n, 2):
        mx = max(mx, a[i + 1] - a[i])
    print(mx)



if __name__ == "__main__":
    tc = int(input())
    for _ in range(tc):
        main()

# https://codeforces.com/contest/2149/problem/B