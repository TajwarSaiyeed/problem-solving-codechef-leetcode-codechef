def main():
    s = input()
    m = int(input())

    arr = []

    for _ in range(m):
        li, ri = map(int, input().split())
        arr.append((li, ri))

    pre = [0] * len(s)

    for i in range(1, len(s)):
        pre[i] = pre[i - 1]
        if s[i] == s[i - 1]:
            pre[i] += 1

    for x, y in arr:
        cnt = pre[y - 1] - pre[x - 1]
        print(cnt)


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/313/problem/B
