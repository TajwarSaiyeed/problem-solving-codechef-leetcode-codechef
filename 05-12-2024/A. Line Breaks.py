tc = int(input())
results = []
for _ in range(tc):
    n, m = map(int, input().split())
    words = [input().strip() for _ in range(n)]
    total_length = 0
    count = 0
    for word in words:
        if total_length + len(word) <= m:
            total_length += len(word)
            count += 1
        else:
            break
    results.append(count)
print("\n".join(map(str, results)))