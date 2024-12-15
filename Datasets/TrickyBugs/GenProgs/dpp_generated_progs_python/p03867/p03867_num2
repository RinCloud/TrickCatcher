import sys

MOD = 10**9 + 7

def solve(N, K):
    if N == 1:
        return K
    elif N == 2:
        return K * (K - 1)
    else:
        return K * (K - 1) * pow(K - 2, N - 2, MOD) % MOD

def main():
    N, K = map(int, sys.stdin.readline().split())
    print(solve(N, K))

if __name__ == '__main__':
    main()