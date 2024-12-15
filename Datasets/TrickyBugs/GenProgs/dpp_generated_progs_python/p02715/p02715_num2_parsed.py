import math

N, K = map(int, input().split())

MOD = int(1e9) + 7

result = 0

for i in range(1, K + 1):
    power = pow(K, N, MOD)
    result = (result + power) % MOD

print(result)