def main():
    n, t = map(int, input().split())
    trn = list(map(int, input().split()))
    
    curr = 1
    for _ in range(1, n):
        if curr == t:
            print("YES")
            return
        if curr >= n:
            break
        curr += trn[curr - 1]
    
    if curr == t:
        print("YES")
    else:
        print("NO")
        
if __name__ == "__main__":
    main()