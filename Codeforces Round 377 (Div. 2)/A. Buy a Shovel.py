def main():
    k, r = map(int, input().split())
    for i in range(1, 11):
        x = (i * k) % 10
        if x in [0, r]:
            print(i)
            return


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/732/A
