def d(y):
    return sum(map(int, str(y)))


def main():
    x = int(input())
    ans = 0
    for y in range(x + 1, x + 100):
        if y - d(y) == x:
            ans += 1
    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/contest/2197/problem/A
