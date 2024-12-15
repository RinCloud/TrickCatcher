import math

N, K = map(int, input().split())

# calculate the modulo
MOD = int(1e9 + 7)

# calculate the number of possible values
possible_values = math.comb(N + 1, K) % MOD

print(possible_values)