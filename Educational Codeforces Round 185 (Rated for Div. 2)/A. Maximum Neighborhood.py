def main():
    n = int(input())
    if n == 1:
        print(1)
    elif n == 2:
        print(9)
    elif n < 5:
        print(n * n * 3 - 3 + n * (n - 1) - 1)
    else:
        print(n * (n - 1) * 3 - 3 + n * n - 1 + n * (n - 2) - 1)
    
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()