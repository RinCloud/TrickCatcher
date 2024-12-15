from math import factorial

MOD = int(1e9 + 7)

def nCr(n, r):
    return factorial(n) // (factorial(r) * factorial(n - r))

def solve(N, M, K):
    ans = 0
    for i in range(1, K + 1):
        if i > N or K - i > M:
            continue
        ans = (ans + nCr(N, i) * nCr(M, K - i)) % MOD
    return ans


N, M, K = map(int, input().split())
result = solve(N, M, K)
print(result)