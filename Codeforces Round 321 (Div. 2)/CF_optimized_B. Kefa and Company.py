import sys

input = sys.stdin.readline

n, d = map(int, input().split())
arr = [tuple(map(int, input().split())) for _ in range(n)]
arr.sort()

l = 0
c_sum = 0
mx = 0

for r in range(n):
    c_sum += arr[r][1]
    while arr[r][0] - arr[l][0] >= d:
        c_sum -= arr[l][1]
        l += 1
    mx = max(mx, c_sum)

print(mx)

# https://codeforces.com/contest/580/problem/B
