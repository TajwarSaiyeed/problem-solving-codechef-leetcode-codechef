def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    curr_sum = sum(arr[:k])
    min_sum = curr_sum
    ans = 0

    for i in range(1, n - k + 1):
        curr_sum = curr_sum - arr[i - 1] + arr[i + k - 1]
        if curr_sum < min_sum:
            min_sum = curr_sum
            ans = i

    print(ans + 1)


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/363/B
