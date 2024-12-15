import math

def count_sequences(N, M):
    modulus = 10**9 + 7
    total_bricks = 2 * M
    possibilities = math.comb(total_bricks, N)
    return possibilities % modulus

# Reading input from standard input
N, M = map(int, input().split())

# Calling the function and printing the result
print(count_sequences(N, M))