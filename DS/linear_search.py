numbers = list(map(int, input().split()))
key = int(input())

for i, number in enumerate(numbers):
    if number == key:
        print("Found", i)
        break
else:
    print("Not Found")