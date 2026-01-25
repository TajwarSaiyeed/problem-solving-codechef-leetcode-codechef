def main():
    n = int(input())

    l = 0
    c = 0

    t_c = 0

    while True:
        l += 1
        c += l
        if t_c + c > n:
            l -= 1
            break
        t_c += c

    print(l)


if __name__ == "__main__":
    main()


# https://codeforces.com/contest/492/problem/A
