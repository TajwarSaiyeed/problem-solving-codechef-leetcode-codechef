def main():
    n = int(input())
    s = input()

    ans = []

    for i in range(n):
        if s[i] == "0":
            ans.append(i + 1)

    if len(ans) >= 1:
        print(len(ans))
        for x in ans:
            print(x, end=" ")
    else:
        print(0)

    print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()


# https://codeforces.com/contest/2162/problem/B
