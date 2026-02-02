def main():
    n = int(input())
    arr = list(map(int, input().split()))
    q = int(input())
    qrr = list(map(int, input().split()))

    prefix = [0] * n
    prefix[0] = arr[0]
    for i in range(n):
        prefix[i] = prefix[i - 1] + arr[i]
    # print(prefix)

    for q in qrr:
        l, r, ans = 0, n - 1, -1
        while l <= r:
            mid = l + (r - l) // 2
            if prefix[mid] >= q:
                ans = mid + 1
                r = mid - 1
            else:
                l = mid + 1

        print(ans)


if __name__ == "__main__":
    main()

# https://codeforces.com/contest/474/problem/B
