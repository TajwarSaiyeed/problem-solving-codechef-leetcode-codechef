def main():
    n = int(input())
    a = list(map(int, input().split()))

    if a[0] == 1 or a[-1] == 1:
        print("Alice")
    else:
        print("Bob")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2183/problem/A
