def c(arr):
    c_mx = 0
    total = 0
    for x in arr:
        if x > c_mx:
            c_mx = x
        total += c_mx
    return total


def main():
    n = int(input())
    arr = list(map(int, input().split()))

    ans = c(arr)

    for i in range(n):
        for j in range(i + 1, n):
            arr[i], arr[j] = arr[j], arr[i]

            val = c(arr)
            if val > ans:
                ans = val

            arr[i], arr[j] = arr[j], arr[i]

    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2185/problem/B
