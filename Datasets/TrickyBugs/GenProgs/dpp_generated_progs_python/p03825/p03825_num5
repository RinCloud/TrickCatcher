import math

def count_possible_values(N, M, K):
    mod = 10**9 + 7
    result = math.comb(N+M-1, K-1) % mod
    return result

# Read input
N, M, K = map(int, input().split())

# Call the function and print the result
print(count_possible_values(N, M, K))