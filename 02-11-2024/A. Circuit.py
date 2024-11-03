def solve():
    n = int(input())
    a = list(map(int, input().split()))
    cnt = a.count(1)

    mn = 0 if cnt % 2 == 0 else 1
    mx = min(cnt, 2 * n - cnt)
    
    print(mn, mx)

def main():
    tc = int(input())
    for _ in range(tc):
        solve()

if __name__ == "__main__":
    main()
