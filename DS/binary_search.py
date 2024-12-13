numbers = list(map(int, input().split()))
key = int(input())
low = 0
high = len(numbers) - 1

while low <= high:
    mid = (low + high) // 2
    if numbers[mid] == key:
        print("Found", mid)
        break
    elif numbers[mid] < key:
        low = mid + 1
    else:
        high = mid - 1
        
else:
    print("Not Found")
    