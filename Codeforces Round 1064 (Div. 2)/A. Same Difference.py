def main():
    n = int(input())
    s = input().strip()
    print(sum(1 for ch in s if ch != s[-1]))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()