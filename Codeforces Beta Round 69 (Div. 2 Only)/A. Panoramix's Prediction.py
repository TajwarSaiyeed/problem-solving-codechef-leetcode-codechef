def main():
    n, m = map(int, input().split())

    arr = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
    for i in range(14):
        if arr[i] == n and arr[i + 1] == m:
            return "YES"

    return "NO"


if __name__ == "__main__":
    print(main())

# https://codeforces.com/contest/80/problem/A
