# Importing the necessary modules
from math import comb

# Taking input from user
N, M, K = map(int, input().split())

# Defining the modulo value
MOD = 10**9 + 7

# Calculating the sum of costs of all possible arrangements
total_cost = 0
for i in range(N):
    for j in range(M):
        for a in range(i, N):
            for b in range(j, M):
                cost = (abs(i - a) + abs(j - b)) * comb((a - i + 1) * (b - j + 1) - 1, K - 1)
                total_cost = (total_cost + cost) % MOD

# Printing the result
print(total_cost)