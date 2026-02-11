def main():
    p, q = map(int, input().split())

    if p < q and p * 3 >= q * 2:
        print("Bob")
    else:
        print("Alice")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2197/problem/C
