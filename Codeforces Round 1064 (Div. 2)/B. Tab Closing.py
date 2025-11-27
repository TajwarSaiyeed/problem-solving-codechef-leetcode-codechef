def main():
    a, b, n = map(int, input().split())

    if a==b:
        print(1)
    elif a >= b * n:
        print(1)
    else:
        print(2)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
