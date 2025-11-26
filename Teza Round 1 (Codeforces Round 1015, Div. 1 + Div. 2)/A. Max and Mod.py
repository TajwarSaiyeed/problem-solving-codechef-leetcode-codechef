def main():
    n = int(input())
    if n % 2 == 0:
        print(-1)
    else :
        print(n, end=" ")
        for i in range(1, n):
            print(i, end=" ")
        print()

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
