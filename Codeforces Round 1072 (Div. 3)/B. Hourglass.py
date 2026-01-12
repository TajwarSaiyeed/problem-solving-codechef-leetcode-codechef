def main():
    s, k, m = map(int, input().split())

    if (m // k) % 2 == 0:
        print(max(0, s - m % k))
    else:
        print(max(0, min(s, k) - m % k))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2184/problem/B
