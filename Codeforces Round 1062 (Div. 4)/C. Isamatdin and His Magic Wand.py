def main():
    n = int(input())
    val = list(map(int, input().split()))
    o, e = False, False
    for i in val:
        if i % 2:
            o = True
        else:
            e = True
    if o and e:
        val.sort()
    print(*val)
    
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()