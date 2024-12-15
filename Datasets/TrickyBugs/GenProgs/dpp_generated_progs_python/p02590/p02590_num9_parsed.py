def sum_of_products(N, A):
    P = 200003
    sum = 0
    for i in range(N-1):
        for j in range(i+1, N):
            sum += (A[i] * A[j]) % P
    return sum

# Get the input
N = int(input())
A = list(map(int, input().split()))

# Calculate the sum of products modulo P
result = sum_of_products(N, A)

# Print the result
print(result)
