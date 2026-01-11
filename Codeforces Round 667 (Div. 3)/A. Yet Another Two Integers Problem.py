import math


def main():
    a, b = map(int, input().split())
    d = abs(a - b)
    # print(d)
    # cnt = 0
    # while d > 10:
    #     d //= 10
    #     cnt += 1
    # # d = math.floor(d)
    # print(d, cnt)
    print(math.floor((d + 9) / 10))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/1409/problem/A
