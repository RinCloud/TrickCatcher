def min_operations_to_sort_sequence(N, A):
    operations = 0
    sorted_sequence = sorted(A)
    for i in range(N):
        if A[i] != sorted_sequence[i]:
            operations += 1
    return operations

# Read input
N = int(input())
A = []
for _ in range(N):
    A.append(int(input()))

# Calculate and print the minimum number of operations
print(min_operations_to_sort_sequence(N, A))