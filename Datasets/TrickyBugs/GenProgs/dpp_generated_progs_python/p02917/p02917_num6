# Read input
N = int(input().strip())
B = list(map(int, input().strip().split()))

# Initialize variables
A = [0] * (N + 1)  # sequence A
max_sum = 0  # maximum sum of elements in A

# Compute the elements of A
for i in range(N - 1):
    A[i + 1] = min(B[i], B[i + 1])

# Compute the maximum sum
for i in range(N + 1):
    max_sum += A[i]

# Print the result
print(max_sum)