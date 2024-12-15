import math

def max_difference(A, B, N):
    max_val = -float('inf')
    for x in range(N+1):
        difference = math.floor(A*x/B) - A*math.floor(x/B)
        max_val = max(max_val, difference)
    return max_val

A, B, N = map(int, input().split())
result = max_difference(A, B, N)
print(result)