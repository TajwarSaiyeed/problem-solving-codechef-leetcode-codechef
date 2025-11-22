def main():
    n = int(input())
    if n % 2 == 1 : return 0
    if n == 2 :
        return 1
    else:
        x = (n - 4) // 4 + 2
        return x

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        print(main())