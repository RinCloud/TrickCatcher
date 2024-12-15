MOD = 998244353

N, K = map(int, input().split())

# pre-compute factorials
factorials = [1]
for i in range(1, K+1):
    factorials.append(factorials[-1] * i)

# calculate the number of possible ways
num_ways = 1
for i in range(N):
    num_ways = (num_ways * (K - i)) % MOD

# calculate the answer
answer = 0
for i in range(N+1):
    answer = (answer + num_ways * factorials[K] * pow(factorials[i] * factorials[K-i] * factorials[K-i-1] * factorials[N-i], MOD-2, MOD)) % MOD

print(answer)