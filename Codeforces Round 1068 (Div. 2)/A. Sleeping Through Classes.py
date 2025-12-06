def main():
    n, k = map(int, input().split())
    s = list(input().strip())

    for i in range(n - 1, -1, -1):
        if s[i] == '1':
            for j in range(i + 1, min(n, i + k + 1)):
                s[j] = '1'

    print(s.count('0'))


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
