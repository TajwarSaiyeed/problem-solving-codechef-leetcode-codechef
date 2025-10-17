def main():
    n = int(input())
    a = list(map(int, input().split()))
    print(max(a))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# A Beautiful Average
# https://codeforces.com/contest/2162/problem/A