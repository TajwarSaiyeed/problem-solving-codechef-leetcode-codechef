def main():
    n = int(input())

    if n == 2:
        print(2)
    elif n == 3:
        print(3)
    elif n % 2 == 0:
        print(0)
    else:
        print(1)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2184/problem/A
