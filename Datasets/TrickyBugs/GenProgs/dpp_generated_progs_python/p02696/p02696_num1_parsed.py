import math

def max_value(A, B, N):
    max_val = float('-inf')
    for x in range(N+1):
        val = math.floor(A*x/B) - A * math.floor(x/B)
        max_val = max(max_val, val)
    return max_val

A, B, N = map(int, input().split())
result = max_value(A, B, N)
print(result)