import math

def max_value(A, B, N):
    max_val = -math.inf
    for x in range(N+1):
        val = math.floor(A*x/B) - A*math.floor(x/B)
        max_val = max(max_val, val)
    return max_val

# Read input
A, B, N = map(int, input().split())

# Call the function and print the result
print(max_value(A, B, N))