
def ans():
    n, a, b = list(map(int, input().split()))

    if n == a == b:
        return "YES"
    elif n > a + b:
        return "YES"
    return "NO"
    


if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        print(ans())
        tc = tc - 1


        [W, W, W, W, W]
        [R, R, R, W, W]
        [B, B, B, B, B]

        [W, W, W, W]
        [R, R, R, R]
        [B, B, B, W]