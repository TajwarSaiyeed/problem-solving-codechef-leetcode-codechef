def main():
    s1, s2, s3, s4 = map(int, input().split())

    if (min(s1, s2) > max(s3, s4)) or (min(s3, s4) > max(s1, s2)):
        print("NO")
    else:
        print("YES")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()

# https://codeforces.com/problemset/problem/1535/A
