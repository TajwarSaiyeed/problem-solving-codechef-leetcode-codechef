import math


def main():
    n, k = map(int, input().split())

    if k > n and k % n == 0:
        return math.ceil(k / n)

    return math.ceil((k * math.ceil(n / k)) / n)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        print(main())

# https://codeforces.com/problemset/problem/1476/A
