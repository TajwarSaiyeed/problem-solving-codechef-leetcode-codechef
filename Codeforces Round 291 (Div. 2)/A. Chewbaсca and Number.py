def main():
    n = list(input())
    ans = ""
    for x in n:
        if int(x) > 4:
            x = 9 - int(x)
            ans += str(x)
        else:
            ans += str(x)

    if ans[0] == "0":
        ans = "9" + ans[1:]

    print(ans)


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/514/problem/A
