from itertools import combinations

def is_possible(N, K, A):
    if K in A:
        return "POSSIBLE"
    for balls in combinations(A, 2):
        diff = abs(balls[0] - balls[1])
        if diff in A:
            return "POSSIBLE"
    return "IMPOSSIBLE"

# Read input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Call the function and print the result
print(is_possible(N, K, A))