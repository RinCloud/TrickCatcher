import sys

MOD = 10**9 + 7

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def solve(N, K):
    res = 0
    for i in range(1, K+1):
        res += pow(i, N, MOD)
        res %= MOD
    return res

def main():
    input = sys.stdin.readline
    N, K = map(int, input().split())
    ans = solve(N, K)
    print(ans)

if __name__ == '__main__':
    main()