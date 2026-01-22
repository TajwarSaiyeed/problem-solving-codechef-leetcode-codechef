def main():
    n = int(input())
    arr = list(map(int, input().split()))

    even, odd = 0, 0
    for i in range(n):
        if i % 2 == 0 and arr[i] % 2 == 1:
            even += 1
        elif i % 2 == 1 and arr[i] % 2 == 0:
            odd += 1

    if even == 0 and odd == 0:
        print(0)
    elif even == odd:
        print(even)
    else:
        print(-1)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1367/B
