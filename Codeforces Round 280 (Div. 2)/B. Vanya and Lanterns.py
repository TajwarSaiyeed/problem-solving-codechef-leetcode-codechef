import math


def main():
    n, l = map(int, input().split())
    a = sorted(map(int, input().split()))

    # 15 5 3 7 9 14 0
    # 0__3_5_7_9____1415

    # 2 5
    # __2__5

    MAX_DIST = float("-inf")
    for i in range(1, len(a)):
        MAX_DIST = max(MAX_DIST, a[i] - a[i - 1])

    # print(f"Max : {MAX_DIST} | M/2 : {MAX_DIST / 2}")
    # print(f"A[0] : {a[0]} | A[-1] : {a[-1]}")

    MAX_DIST /= 2
    if a[0] != 0:
        MAX_DIST = max(MAX_DIST, abs(0 - a[0]))
    if a[-1] != l:
        MAX_DIST = max(MAX_DIST, abs(l - a[-1]))

    print(f"{MAX_DIST:.10f}")


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/492/B
