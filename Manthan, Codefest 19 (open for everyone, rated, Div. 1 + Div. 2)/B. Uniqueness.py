# def distinct(arr):
#     n = len(arr)
#     s = len(set(arr))
#     return True if n == s else False


def main():
    n = int(input())
    arr = list(map(int, input().split()))

    if n == len(set(arr)):
        print(0)
        return

    # mx, l = 0, 0
    # for r in range(n + 1):
    #     curr_arr = arr[l:r]
    #     # print(curr_arr)
    #     if distinct(curr_arr):
    #         # print(curr_arr)
    #         mx = max(mx, len(curr_arr))
    #     else:
    #         l += 1

    # # print(mx)
    # print(n - mx)

    ans = n
    for i in range(n + 1):
        pre = arr[:i]

        if len(set(pre)) != len(pre):
            break

        st = set(pre)
        suf = 0
        for j in range(n - 1, i - 1, -1):
            if arr[j] in st:
                break
            st.add(arr[j])
            suf += 1

        ans = min(ans, n - (i + suf))

    print(ans)


if __name__ == "__main__":
    main()

# http://codeforces.com/contest/1208/problem/B
