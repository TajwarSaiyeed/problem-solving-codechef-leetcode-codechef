def main():
    n = int(input())
    if n == 0: return 1
    else :
        x = [8, 4, 2, 6]
        return x[(n-1) % 4]

if __name__ == "__main__":
    print(main())
