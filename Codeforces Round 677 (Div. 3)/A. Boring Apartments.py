def p_sum(arr):
    prefix_sum = [0] * 36
    prefix_sum[0] = arr[0]
    for i in range(1, 36):
        prefix_sum[i] = prefix_sum[i - 1] + arr[i]
    return prefix_sum


def p_com():
    arr, cn = [], []
    i, c = 1, 1
    for _ in range(36):
        if i == 5:
            c += 1
            i = 1
        j = str(c) * i
        arr.append(int(j))
        cn.append(len(j))
        i += 1
    return arr, cn


def main():
    x = int(input())
    arr, cn = p_com()
    prefix_sum = p_sum(cn)
    idx = arr.index(x)
    print(prefix_sum[idx])


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1433/A
