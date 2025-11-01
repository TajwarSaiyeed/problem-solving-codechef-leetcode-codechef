def main():
    n, m = map(int, input().split())

    if n < m:
        print(-1)
    # elif n % m == 0 and (n/m) % 2 == 0:
    #     print(n//m)
    # else:
    #     x = n//m + 1
    #     print(x)
    else :
        x = (n + 1) //2
        print(((x + m - 1) //m) * m)
        # print(((n+1)//2 - (n//m - 1))) / m*m)


if __name__ == "__main__":
    main()