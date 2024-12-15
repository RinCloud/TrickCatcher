def min_possible_value(N, K):
    while N >= K:
        N = abs(N - K)
    return N

# Getting input from the user
N, K = map(int, input().split())

# Calling the function and printing the result
print(min_possible_value(N, K))