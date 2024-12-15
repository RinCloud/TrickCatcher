import math

def min_F(N):
    # Find all possible pairs (A, B) such that N = A * B
    pairs = []
    for i in range(1, int(math.sqrt(N)) + 1):
        if N % i == 0:
            pairs.append((i, N // i))
    
    min_F_value = float('inf')
    
    # Find the minimum value of F(A, B) for each pair (A, B)
    for A, B in pairs:
        F_value = max(len(str(A)), len(str(B)))
        min_F_value = min(min_F_value, F_value)
    
    return min_F_value


# Read the input N
N = int(input())

# Compute the minimum value of F(A, B) for N
result = min_F(N)

# Print the result
print(result)