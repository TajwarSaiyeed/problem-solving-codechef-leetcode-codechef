def main():
    m = input()
    v = input()
    s = "qwertyuiopasdfghjkl;zxcvbnm,./"
    ans = ""
    for i in range(len(v)):
        x = s.index(v[i])
        if m == "L":
            ans += s[x + 1]
        else:
            ans += s[x - 1]
        # print(v[i])
        # print(x)
    print(ans)


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/474/problem/A
