def max_sum(N, B):
    A = [0] * (N+1)
    A[-1] = B[0]
    for i in range(N-2, -1, -1):
        A[i+1] = min(B[i], B[i+1])
    return sum(A)

# Read input
N = int(input())
B = list(map(int, input().split()))

# Call the function and print the result
print(max_sum(N, B))