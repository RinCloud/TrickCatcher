import sys

def solve(N, K):
    MOD = 10**9 + 7

    if N == 1:
        return K

    if N % 2 == 0:
        return pow(K, N // 2, MOD)
    else:
        return (K * pow(K - 1, N // 2, MOD)) % MOD

N, K = map(int, sys.stdin.readline().split())
print(solve(N, K))