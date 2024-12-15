def min_operations(N, K, sequence):
    min_value = min(sequence)
    min_count = sum([1 for num in sequence if num == min_value])
    operations = (N - min_count + K - 2) // (K - 1)
    return operations

# Read input
N, K = map(int, input().split())
sequence = list(map(int, input().split()))

# Find minimum number of operations required
min_ops = min_operations(N, K, sequence)

# Print the minimum number of operations required
print(min_ops)
