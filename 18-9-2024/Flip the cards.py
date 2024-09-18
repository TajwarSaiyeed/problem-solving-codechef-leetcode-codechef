# Author: Tajwar Saiyeed
# Date: 2024-09-18 07:21:00
# File: Flip the cards.cpp

tc = int(input())
for _ in range(tc):
    n, x = map(int, input().split())
    if n == x:
        print(0)
    else: 
        print(min(n-x, x))

# Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS