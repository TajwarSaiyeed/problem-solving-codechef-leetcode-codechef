arr = []

def fibo(n):
    if n<=1: 
        return n
    return fibo(n - 1) + fibo(n - 2)

def main():
    global arr
    n = int(input())
    for i in range(n):
        arr.append(fibo(i))
    print(arr)
    print(sum(arr))

if __name__ == "__main__":
    main()