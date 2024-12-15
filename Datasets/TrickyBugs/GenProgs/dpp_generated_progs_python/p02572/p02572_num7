def sum_of_products(N, A):
    mod = 10**9 + 7
    total_sum = 0
    for i in range(N-1):
        for j in range(i+1, N):
            total_sum += (A[i] * A[j]) % mod
    return total_sum % mod

# Reading input from standard input
N = int(input())
A = list(map(int, input().split()))

# Calling the function and printing the output
print(sum_of_products(N, A))