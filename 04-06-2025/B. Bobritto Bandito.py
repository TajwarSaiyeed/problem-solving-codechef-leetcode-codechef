t = int(input())
for _ in range(t):
    n, m, l, r = map(int, input().split())
    ans_l = 0
    ans_r = 0
    nxt = 1
    idx = 1
    while idx <= m:
        if (nxt % 2 == 1) and (ans_l > l):
            ans_l -= 1
            idx += 1
        elif ans_r < r:
            ans_r += 1
            idx += 1
        nxt += 1
    print(ans_l, ans_r)