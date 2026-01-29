def main():
    n = int(input())
    res = [0] * n
    res[0] = (n + 1) // 2
    for i in range(1, n):
        if (i % 2) != (n % 2):
            res[i] = res[i - 1] + i
        else:
            res[i] = res[i - 1] - i
    print(*res)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()


# https://codeforces.com/contest/2188/problem/A
