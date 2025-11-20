def main():
    n, m = map(int, input().split())
    ar1 = list(map(int, input().split()))
    ar2 = list(map(int, input().split()))

    l = r = ans = 0
    while l < n and r < m:
        x=y=0
        c = ar1[l]
        while l < n and ar1[l] == c:
            l+=1
            x+=1
        while r < m and ar2[r] < c: r+=1
        while r < m and ar2[r] == c:
            r+=1
            y+=1
        ans += x*y
    print(ans)

if __name__ == "__main__":
    main()