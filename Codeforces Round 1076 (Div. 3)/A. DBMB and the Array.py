def main():
    n, s, x = map(int, input().split())
    arr = list(map(int, input().split()))
    sm = sum(arr)
    if sm > s:
        print("NO")
        return

    need = s - sm
    if need % x == 0:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()


# https://codeforces.com/contest/2193/problem/A
