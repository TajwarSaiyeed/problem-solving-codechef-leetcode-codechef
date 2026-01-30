from collections import Counter


def main():

    n = int(input())
    s = input()

    mxl = len(set(s))
    cnt = Counter()
    s_cnt, l, ans = 0, 0, n
    for r in range(n):
        cnt[s[r]] += 1
        if cnt[s[r]] == 1:
            s_cnt += 1

        while s_cnt == mxl:
            ans = min(ans, r - l + 1)
            cnt[s[l]] -= 1
            if cnt[s[l]] == 0:
                s_cnt -= 1
            l += 1

    print(ans)


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/701/C
