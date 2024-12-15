def find_maximum_sum(N, B):
    A = [0] * (N+1)
    A[0] = B[0]
    A[N] = B[N-2]
    for i in range(1, N):
        A[i] = min(B[i-1], B[i])
    return sum(A)

# Read input from standard input
N = int(input())
B = list(map(int, input().split()))

# Call the function
result = find_maximum_sum(N, B)

# Print the result
print(result)