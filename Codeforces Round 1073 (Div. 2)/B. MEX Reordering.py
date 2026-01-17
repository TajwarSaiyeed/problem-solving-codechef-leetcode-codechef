def main():
    n = int(input())
    arr = list(map(int, input().split()))

    cnt0 = arr.count(0)
    cnt1 = arr.count(1)

    if cnt0 == 0:
        print("NO")
    elif cnt0 > 1 and cnt1 == 0:
        print("NO")
    else:
        print("YES")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2191/problem/B
