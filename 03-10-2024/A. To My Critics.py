#     Author: Tajwar Saiyeed
#     Date: 2024-10-03 21:49:04
#     File: A. To My Critics.cpp

tc = int(input())
while tc>0:    
    arr = list(map(int, input().split()))
    arr.sort()
    if arr[1] + arr[2] >= 10:
        print("YES")
    else :
        print("NO")
    tc-=1
    
# Problem : https://codeforces.com/problemset/problem/1850/A