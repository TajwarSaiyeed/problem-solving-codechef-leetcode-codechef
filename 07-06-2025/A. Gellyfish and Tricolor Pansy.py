import sys
def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    idx = 1
    out = []
    for _ in range(t):
        a = int(data[idx]);     b = int(data[idx+1])
        c = int(data[idx+2]);   d = int(data[idx+3])
        idx += 4
 
        if a >= b:
            if c >= d or c >= b:
                out.append("Gellyfish")
            else:
                out.append("Flower")
        else:
            if d > c or d > a:
                out.append("Flower")
            else:
                out.append("Gellyfish")
 
    sys.stdout.write("\n".join(out))
 
if __name__ == "__main__":
    main()