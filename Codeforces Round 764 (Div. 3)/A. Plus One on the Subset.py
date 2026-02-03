def main():
    n = int(input())
    arr = sorted(list(map(int, input().split())))
    print(arr[-1] - arr[0])


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1624/A
