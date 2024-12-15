# IMPLEMENTATION

def card_game(N, M, K):
    MOD = 10**9 + 7
    total = pow(3, N+M+K, MOD)
    result = (total - pow(3, N, MOD) - pow(3, M, MOD) - pow(3, K, MOD) + pow(3, gcd(N, M), MOD) + pow(3, gcd(M, K), MOD) + pow(3, gcd(N, K), MOD) - pow(3, gcd(N, gcd(M, K)), MOD)) % MOD
    return result

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

# Taking input
N, M, K = map(int, input().split())

# Calling the function and printing the result
print(card_game(N, M, K))