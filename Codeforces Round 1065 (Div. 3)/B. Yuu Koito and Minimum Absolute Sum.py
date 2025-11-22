def main():
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    if a[0] == -1 and a[-1] == -1:
        a[0] = 0
        a[-1] = 0
    elif a[0] == -1 and a[-1] != -1:
        a[0] = a[-1]
    elif a[0] != -1 and a[-1] == -1:
        a[-1] = a[0]
    else :
        ans = abs(a[0] - a[-1])
    a = [0 if x == -1 else x for x in a]    
    print(ans)
    print(*a)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()