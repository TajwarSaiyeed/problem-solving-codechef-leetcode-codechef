def main():
    s = input()

    ans = s[0:2]
    for i in range(3, len(s), 2):
        ans += s[i]

    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1367/A
