def main():
    n = int(input())
    s = input()

    mp = {}

    for i in range(n):
        if s[i] in mp:
            if (i - mp[s[i]]) > 1:
                print("NO")
                return
            mp[s[i]] = i
        else:
            mp[s[i]] = i

    print("YES")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1520/A
