import sys

MOD = 1000000007

def solve(n, k, a):
    cnt = 0
    for i in range(60, -1, -1):
        c = 0
        for x in a:
            if (x >> i) & 1:
                c += 1
        if (k >> i) & 1:
            cnt += (1 << i) * c
        else:
            cnt += (1 << i) * max(c, n - c)
        cnt %= MOD
    return cnt

def main():
    n, k = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    ans = solve(n, k, a)
    print(ans)

if __name__ == "__main__":
    main()