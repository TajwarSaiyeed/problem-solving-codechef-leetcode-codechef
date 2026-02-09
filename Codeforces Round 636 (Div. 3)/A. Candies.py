def main():
    n = int(input())
    for k in range(2, 32):
        bit = (1 << k) - 1
        x = n // bit
        if n % bit == 0:
            print(x)
            return


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1343/A
