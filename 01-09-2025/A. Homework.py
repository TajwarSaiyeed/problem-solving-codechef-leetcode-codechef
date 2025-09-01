
def main():
    n = int(input())
    a = input()
    m = int(input())
    b = input()
    c = input()

    for i,x in enumerate(c):
        if x == "D":
            a = a + b[i]
        else:
            a = b[i] + a

    print(a)

if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        main()
        tc = tc - 1