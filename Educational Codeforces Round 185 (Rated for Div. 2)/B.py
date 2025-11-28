def main():
    n = int(input())
    b = list(map(int, input().split()))
    s = sum(b)
    mn = 0
    for x in b:
        if x > 0:
            mn += 1
    
    ans = min(s - n + 1, mn)
    print(ans)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()