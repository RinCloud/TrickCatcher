import math

N, K = map(int, input().split())

MOD = 10**9 + 7

result = 0

for i in range(1, K+1):
    result += pow(i, N, MOD)

result %= MOD

print(result)