import math


def main():
    n = int(input())
    arr = [0] + list(map(int, input().split()))

    ans = 0
    b = int(math.sqrt(n)) + 1

    for i in range(1, b + 1):
        for j in range(1, n + 1):
            prod = i * arr[j]
            if prod < j:
                k = j - prod
                if arr[k] == i:
                    ans += 1

    for i in range(1, n + 1):
        if arr[i] > b:
            if arr[i] >= n:
                continue
            k = 1
            while True:
                j = i + k * arr[i]
                if j > n:
                    break
                if arr[j] == k:
                    ans += 1
                k += 1

    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2197/problem/D
