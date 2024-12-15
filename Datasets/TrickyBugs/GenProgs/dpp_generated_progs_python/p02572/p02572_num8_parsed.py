# Program to find the sum of A_i * A_j over all pairs (i,j) such that 1 <= i < j <= N, modulo (10^9+7)

# Function to calculate the sum of A_i * A_j
def find_sum_of_products(N, arr):
    MOD = 10**9 + 7
    sum = 0
    
    # Loop to calculate the sum of A_i * A_j
    for i in range(N-1):
        for j in range(i+1, N):
            sum += arr[i] * arr[j]
            sum %= MOD
    
    return sum

# Reading input from standard input
N = int(input())
arr = list(map(int, input().split()))

# Calling the function to find sum of A_i * A_j 
result = find_sum_of_products(N, arr)

# Printing the result
print(result)