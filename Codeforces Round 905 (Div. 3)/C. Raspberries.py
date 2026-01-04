def m(a):
    ans = 1
    for x in a:
        ans *= x
    return ans


def all_odd(a):
    for x in a:
        if x % 2 == 0:
            return False
    return True


def two_even_only(a):
    cnt = 0
    for x in a:
        if x % 2 == 0:
            cnt += 1
    if cnt == 2:
        return True
    else:
        return False


def one_even_only(a):
    cnt = 0
    for x in a:
        if cnt > 1:
            break
        if x % 2 == 0:
            cnt += 1
    if cnt == 1:
        return True
    else:
        return False


def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    ans = m(a)
    # mn = min(a)

    if ans % k == 0:
        print(0)
    elif k == 4:
        ans = k
        for x in a:
            ans = min(ans, k - x % k)

        cnt = 0
        for x in a:
            if x % 2 == 0:
                cnt += 1
        ans_2 = max(0, 2 - cnt)

        print(min(ans, ans_2))
    else:
        ans = k
        for x in a:
            ans = min(ans, k - x % k)
        print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1883/C
