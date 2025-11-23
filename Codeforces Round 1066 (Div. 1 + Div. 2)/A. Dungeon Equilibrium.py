from collections import Counter

def main():
    n = int(input())
    arr = list(map(int, input().split()))

    ct = Counter(arr)
    deletions = 0
    
    for v, c in ct.items():
        if v == 0:
            deletions += c
        elif c > v:
            deletions += c - v
        elif c < v:
            deletions += c
    
    print(deletions)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()