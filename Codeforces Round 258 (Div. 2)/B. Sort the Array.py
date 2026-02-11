def main():
    n = int(input())
    arr = list(map(int, input().split()))

    cp_arr = sorted(arr)

    diff = []
    for i in range(n):
        if arr[i] != cp_arr[i]:
            diff.append(i)

    if not diff:
        print("yes")
        print(1, 1)
        return

    l = diff[0]
    r = diff[-1]

    arr[l : r + 1] = arr[l : r + 1][::-1]

    if arr == cp_arr:
        print("yes")
        print(l + 1, r + 1)
    else:
        print("no")


if __name__ == "__main__":
    main()


# https://codeforces.com/contest/451/problem/B
