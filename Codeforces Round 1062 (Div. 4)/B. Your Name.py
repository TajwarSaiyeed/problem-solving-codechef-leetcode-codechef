from collections import Counter
def main():
    n = int(input())
    s, t = map(str, input().split())
    cnt_s, cnt_t = Counter(s), Counter(t)

    for ch in s:
        if cnt_s[ch] != cnt_t[ch]:
            return "NO"
    return "YES"

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        print(main())
