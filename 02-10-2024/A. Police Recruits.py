# Author: Tajwar Saiyeed
# Date: 2024-10-02 21:56:00
# File: A. Police Recruits.cpp


n = int(input())
arr = list(map(int, input().split()))

police = 0
crime = 0

for x in arr:
    if x > 0:
        police += x
    elif police == 0:
        crime += 1
    else:
        police -= 1


print(crime)



# Problem : https://codeforces.com/contest/427/problem/A