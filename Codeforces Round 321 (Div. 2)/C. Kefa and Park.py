import sys


def main():
    input = sys.stdin.readline
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    adj = [[] for _ in range(n + 1)]

    for _ in range(n - 1):
        x, y = map(int, input().split())
        adj[x].append(y)
        adj[y].append(x)

    ans = 0

    st = [(1, 0, 0)]

    while st:
        node, parent, num = st.pop()

        if arr[node - 1]:
            num += 1
        else:
            num = 0

        if num > m:
            continue

        is_leaf = True
        for v in adj[node]:
            if v != parent:
                is_leaf = False
                st.append((v, node, num))

        if is_leaf:
            ans += 1

    print(ans)


if __name__ == "__main__":
    main()

# https://codeforces.com/problemset/problem/580/C
