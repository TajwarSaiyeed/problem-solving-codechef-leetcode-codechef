def main():
    n = int(input())
    arr = list(map(int, input().split()))

    flag = True
    for i in range(n - 1):
        if (arr[i] % 2) == (arr[i + 1] % 2):
            flag = False
            break

    if flag:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2191/problem/A
