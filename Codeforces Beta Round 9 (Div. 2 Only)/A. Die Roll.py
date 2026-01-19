def main():
    Y, W = map(int, input().split())
    mx = max(Y, W)
    x = 6 - mx + 1

    if x == 6:
        print("1/1")
    elif x == 5:
        print("5/6")
    elif x == 4:
        print("2/3")
    elif x == 3:
        print("1/2")
    elif x == 2:
        print("1/3")
    elif x == 1:
        print("1/6")


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/9/A
