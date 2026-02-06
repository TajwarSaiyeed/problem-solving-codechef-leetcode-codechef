def main():
    n = int(input())
    arr = sorted(list(tuple(map(int, input().split())) for _ in range(n)))

    for i in range(n - 1):
        if arr[i][1] > arr[i + 1][1]:
            print("Happy Alex")
            return

    print("Poor Alex")


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/456/problem/A
