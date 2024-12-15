def max_sum(N, A):
    total = sum(A)
    max_sum = 0
    for i in range(0, N, 2):
        max_sum = max(max_sum, total - A[i])
    return max_sum


# Read the input
N = int(input())
A = list(map(int, input().split()))

# Print the maximum possible sum of the chosen elements
print(max_sum(N, A))