def main():
    x, y = map(int, input().split())
    a, b = map(int, input().split())
    
    if x == y == 0:
        print(0)
        return
    
    ans = min(min(x, y) * b + abs(x-y) * a, (x + y) * a)
    print(ans)
    
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
        
# https://codeforces.com/problemset/problem/1342/A