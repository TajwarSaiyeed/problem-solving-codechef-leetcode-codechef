tc = int(input())

while tc>0:
    n, a, b, c = map(int, input().split())
    sum = a + b + c
    ans = n // sum
    n = n - (ans * sum)
    ans = ans * 3
    if n != 0:
        if n > a+b:
            ans = ans + 3
        elif n > a:
            ans = ans + 2
        else:
            ans = ans + 1
            
    print(ans)
        
    tc = tc - 1