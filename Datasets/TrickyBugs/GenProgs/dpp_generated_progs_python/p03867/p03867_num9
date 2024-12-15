import math

N, K = map(int, input().split())

# Generating the count of possibilities for each number in sequence a
count = [0] * (K + 1)
for i in range(1, K + 1):
    count[i] = pow(K // math.gcd(K, i), N, mod)

# Calculating the sum of possibilities for all numbers in sequence a
total = sum(count) % mod

print(total)