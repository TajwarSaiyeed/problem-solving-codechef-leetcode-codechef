def main():
    x, y = map(int, input().split())
    
    if x == y:
        print(-1)
    elif x < y:
        print(2)
    elif y == 1 or x - y == 1:
        print(-1)
    else:
        print(3)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()