MOD = 998244353

def calculate_ways(N, K):
    factorial = [1] * (K + 1)
    for i in range(1, K + 1):
        factorial[i] = (factorial[i - 1] * i) % MOD
    
    result = 1
    for i in range(1, N + 1):
        if K - i < 0:
            break
        result += (factorial[K] * pow(factorial[K - i], MOD - 2, MOD) * pow(factorial[i], MOD - 2, MOD)) % MOD
        result %= MOD
    
    return result

N, K = map(int, input().split())
print(calculate_ways(N, K))