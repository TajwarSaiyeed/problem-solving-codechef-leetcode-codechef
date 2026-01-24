def main():
    s = input()
    n = len(s)
    if n % 2 != 0:
        print("NO")
        return

    left, right = s[0 : (n // 2)], s[(n // 2) : n]

    if left != right:
        print("NO")
    else:
        print("YES")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/1619/problem/A
