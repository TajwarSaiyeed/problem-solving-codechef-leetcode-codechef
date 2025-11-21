def main():
    n, m = map(int, input().split())
    arr1, arr2 = [list(map(int, input().split())) for _ in range(2)]
    l = r = ans = 0

    while r < m :
        while l < n and arr2[r] > arr1[l]:
            l += 1
            ans += 1   
        r += 1
        print(ans, end=" ")
    
if __name__ == "__main__":
    main()