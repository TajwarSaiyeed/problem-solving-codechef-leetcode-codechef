def main():
    n = int(input())
    y, r = map(int, input().split())
    ans = min(n, r + (y // 2))
    print(ans)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
