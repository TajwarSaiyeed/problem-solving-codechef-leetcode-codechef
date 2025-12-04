"""
    Author: Tajwar Saiyeed
    Date: 2024-10-10 23:19:58
    File: A. Max Plus Size.cpp
"""

def main():
    n = int(input())
    a = list(map(int, input().split()))
    ev_el = a[0::2]
    mx_ev = max(ev_el)
    cnt = len(ev_el)
    s_ev = mx_ev + cnt
    
    odd_el = a[1::2]
    if odd_el:
        max_odd = max(odd_el)
        cnt_odd = len(odd_el)
        score_odd = max_odd + cnt_odd
    else:
        score_odd = 0
        
    print(max(s_ev, score_odd))
    

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        main()
        
# Problem :