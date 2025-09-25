from collections import Counter

def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    frq = Counter(a)

    ms = 0
    for x in range(0, k):
        if frq[x] == 0:
            ms += 1
    ans = frq[k]
    if k == n:
        print(ms)
    else:
        print(max(ms, ans))

if __name__ == "__main__":
    tc = int(input())
    for _ in range(tc):
        main()