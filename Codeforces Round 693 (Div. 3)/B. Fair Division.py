def main():
    n = int(input())
    arr = list(map(int, input().split()))

    one, two = 0, 0
    for x in arr:
        if x == 1:
            one += 1
        else:
            two += 2

    t = one + two

    if t % 2 != 0:
        print("NO")
    elif one == 0 and (two // 2) % 2 == 1:
        print("NO")
    else:
        print("YES")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/1472/problem/B
