mod = 10**9 + 7

def compute_permutation_score(N):
    factorial = [1] * (N+1)
    for i in range(2, N+1):
        factorial[i] = (factorial[i-1] * i) % mod
    
    permutation_score = 0
    for i in range(1, N):
        permutation_score += (factorial[N] * pow(factorial[i] * factorial[N-i] % mod, mod-2, mod)) % mod
    
    return permutation_score % mod

N = int(input())
print(compute_permutation_score(N))