def main():
    n = int(input())
    s = input()

    is_sorted = True
    for i in range(len(s) - 1):
        if s[i] > s[i + 1]:
            is_sorted = False
            break

    if is_sorted:
        print("Bob")
        return

    cnt0 = s.count("0")
    arr = []

    for i in range(n):
        idx = i + 1
        ch = s[i]

        if idx <= cnt0:
            if ch == "1":
                arr.append(idx)
        else:
            if ch == "0":
                arr.append(idx)

    print("Alice")
    print(len(arr))
    print(" ".join(map(str, arr)))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2191/problem/C
