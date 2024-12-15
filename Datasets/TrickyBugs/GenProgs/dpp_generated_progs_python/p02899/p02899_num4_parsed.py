import sys

def reconstruct_order(n, a):
    order = [0] * n
    for i in range(n):
        order[a[i]-1] = i+1
    return order

def main():
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().strip().split()))
    order = reconstruct_order(n, a)
    print(*order)

if __name__ == "__main__":
    main()