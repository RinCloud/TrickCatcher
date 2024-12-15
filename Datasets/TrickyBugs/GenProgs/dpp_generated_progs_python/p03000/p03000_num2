def count_bounces(N, X, L):
    count = 0
    total_distance = 0
    for i in range(N):
        total_distance += L[i]
        if total_distance <= X:
            count += 1
    return count

# Read input
N, X = map(int, input().split())
L = list(map(int, input().split()))

# Compute and print the result
result = count_bounces(N, X, L)
print(result)