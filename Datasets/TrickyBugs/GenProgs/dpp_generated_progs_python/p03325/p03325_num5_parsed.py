import sys

def solve(n, a):
    ans = 0
    for i in range(n):
        while a[i] % 2 == 0:
            a[i] //= 2
            ans += 1
    return ans

def main():
    n = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().split()))
    print(solve(n, a))

if __name__ == '__main__':
    main()