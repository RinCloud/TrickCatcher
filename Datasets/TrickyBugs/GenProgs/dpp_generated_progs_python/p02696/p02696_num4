import math

def calculate_max_value(A, B, N):
    max_value = -math.inf
    for x in range(N + 1):
        value = math.floor(A * x / B) - A * math.floor(x / B)
        max_value = max(max_value, value)
    return max_value

A, B, N = map(int, input().split())
print(calculate_max_value(A, B, N))