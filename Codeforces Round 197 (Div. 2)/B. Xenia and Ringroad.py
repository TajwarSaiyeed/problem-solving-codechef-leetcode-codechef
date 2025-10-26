def main():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    ans = 0
    prev = 1

    for i in range(m):
        curr = arr[i]
        if prev <= curr:
            ans += curr - prev
        else:
            ans += n - prev + curr
        prev = curr
    print(ans)

if __name__ == "__main__":
    main()

# Problem : https://codeforces.com/contest/339/problem/B