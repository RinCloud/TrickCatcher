import sys

MODULO = 10**9 + 7

def sum_of_products(N, A):
    total_sum = 0
    prefix_sum = [0] * N
    
    prefix_sum[0] = A[0]
    for i in range(1, N):
        prefix_sum[i] = (prefix_sum[i-1] + A[i]) % MODULO
        
    for i in range(N-1):
        total_sum = (total_sum + (prefix_sum[N-1] - prefix_sum[i])) % MODULO
        
    return total_sum

# Read input from Standard Input
input_lines = sys.stdin.readlines()

N = int(input_lines[0])
A = list(map(int, input_lines[1].split()))

# Calculate the sum of products
result = sum_of_products(N, A)

# Print the result
print(result)