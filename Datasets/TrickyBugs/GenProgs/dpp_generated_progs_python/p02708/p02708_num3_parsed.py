N, K = map(int, input().split())

MOD = 10 ** 9 + 7

factorial = [1]
for i in range(1, N+K+1):
    factorial.append((factorial[-1] * i) % MOD)

inverse_factorial = [1] * (N+K+1)
inverse_factorial[N+K] = pow(factorial[N+K], MOD-2, MOD)
for i in range(N+K-1, -1, -1):
    inverse_factorial[i] = (inverse_factorial[i+1] * (i+1)) % MOD

answer = 0
for i in range(K, N+2):
    answer += (factorial[N] * inverse_factorial[N-i+1] * inverse_factorial[i-1]) % MOD
    answer %= MOD

print(answer)